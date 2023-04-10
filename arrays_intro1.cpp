//array without using function
#include<iostream>
using namespace std;

int main()
{
  //declaration of an array
  int first[10];
  //accessing the array element
  cout<<"printing the element at 5 index:"<< first[3];
  cout<< endl;

  //initialization of an array
  int second[20]={1,2,3};
  //accessing the array element
  cout<<"printing the element at 7 index:"<< second[7];
  //accessing an array element greater than the size of an array
  cout<<"printing the element at 25 index:"<< second[25];

  int third[15] = {1,2,6};
  int n = 15;

  //printing array element
  for(int i = 0;i< 15 ; i++)
  {
    cout<<"array element:"<< third[i];
    cout<< endl;
  }
  
}