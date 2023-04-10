#include<iostream>
using namespace std;

int dummy(int n)
{
  n++;
  cout << n << endl;
  return n;
}

int main()
{
  int num;
  cin >> num;

  cout << "number is:" << dummy(num) << endl;

  return 0;
}

