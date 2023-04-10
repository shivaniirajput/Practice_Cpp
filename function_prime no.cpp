#include<iostream>
using namespace std;

bool isPrimeNumber ( int n)
{
  //1 -> prime number
  //0 -> not a prime number
  for(int i = 2 ; i<n ; i++)
  {
    if(n%i)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int n;
  cin >> n;

  if(isPrimeNumber(n))
  {
    cout << "The number is prime" << endl;
  }
  else
  {
    cout << "The number is not prime" << endl;
  }
}