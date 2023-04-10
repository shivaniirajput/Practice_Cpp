  #include<iostream>
  using namespace std;

  void printArray(int array[] , int size)
  {
    cout << "printing the array" << endl;
    //print the array
    for(int i=0 ; i<=size ; i++)
    {
      cout << array[i] << endl;
    }
    cout << "printing done!" << endl;
  }

  int main()
  {
    int first[12] = {1,2};
    int n = 12; 
    printArray(first , 12);

    return 0;
  }