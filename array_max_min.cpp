#include<iostream>
#include<limits.h>
using namespace std;


int getMax(int num[], int size)
{
  int max = INT_MIN;
  for(int i=0 ; i<size ; i++)
  {
    if(num[i] > max)
    {
      max = num[i];
    }
  }
  //returning maximum value
  return max;

}


int getMin(int num[], int size)
{
  int min = INT_MAX;
  for(int i=0 ; i<size ; i++)
  {
    if(num[i] < min)
    {
      min = num[i];
    }
  }
  //returning minimum value
  return min;

}

int main()
{
  int size;
  cin >> size;

  int num[100];

  for(int i = 0 ; i< size ; i++)

  {
    cin >> num[i];
  }

  cout << "maximum element" << getMax(num , size) << endl;
  cout << "minimum element" << getMax(num , size) << endl;

  return 0; 


}
