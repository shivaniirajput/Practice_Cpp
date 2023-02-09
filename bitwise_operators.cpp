#include<iostream>
using namespace std;

int main()
{
  int a = 4;
  int b = 6;
//using bitwise operators
  cout<<" a&b " << (a&b) << endl;
  cout<<" a|b " << (a|b) << endl;
  cout<<" a^b " << (a^b) << endl;
  cout << (21<<2) << endl;
  cout << (17>>1) << endl; 

  int i = 7;

  cout << (++i) << endl;
  //8
  cout << (i++) << endl;
  //8,i=9
  cout << (i--) << endl;
  //6
  cout << (--i) << endl;
  //7, i=7 
}