#include<iostream>
using namespace std;

int main()
{
  int a = 2/4;
  cout << a << endl;
  
  // using assignment operator =
  int b = 2;
  int c = 3;
  
  //using logical operator
  bool first = (b==c);
  cout << first << endl;

  bool second = (b<c);
  cout << second << endl;

  bool third = (b>c);
  cout << third << endl;

  int d = 22;
  cout << !d << endl;

  return 0;
}