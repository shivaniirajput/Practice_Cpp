#include <iostream>
#include <vector>
#include <thread>
#include <semaphore.h>

const int BUFFER_SIZE = 5;
std::vector<int> buffer(BUFFER_SIZE);
sem_t emptySlots, filledSlots, mutex;

void producer(int producerId) {
    int item = 1;
    while (true) {
        // Produce an item
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
        sem_wait(&emptySlots);
        sem_wait(&mutex);
        
        // Insert the item into the buffer
        buffer.push_back(item);
        std::cout << "Producer " << producerId << " produced item: " << item << std::endl;
        item++;
        
        sem_post(&mutex);
        sem_post(&filledSlots);
    }
}

void consumer(int consumerId) {
    while (true) {
        sem_wait(&filledSlots);
        sem_wait(&mutex);
        
        // Remove an item from the buffer
        int item = buffer.back();
        buffer.pop_back();
        std::cout << "Consumer " << consumerId << " consumed item: " << item << std::endl;
        
        sem_post(&mutex);
        sem_post(&emptySlots);
        
        // Consume the item
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}

int main() {
    sem_init(&emptySlots, 0, BUFFER_SIZE);
    sem_init(&filledSlots, 0, 0);
    sem_init(&mutex, 0, 1);

    std::vector<std::thread> producers;
    std::vector<std::thread> consumers;

    for (int i = 0; i < 2; i++) {
        producers.push_back(std::thread(producer, i));
    }

    for (int i = 0; i < 3; i++) {
        consumers.push_back(std::thread(consumer, i));
    }

    for (auto& producerThread : producers) {
        producerThread.join();
    }

    for (auto& consumerThread : consumers) {
        consumerThread.join();
    }

    sem_destroy(&emptySlots);
    sem_destroy(&filledSlots);
    sem_destroy(&mutex);

    return 0;
}
