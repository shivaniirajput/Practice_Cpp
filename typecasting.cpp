#include<iostream>
using namespace std;

int main()
{
  int a = 'a';
  cout<<a<< endl;

  char c = 98;
  cout<< c << endl;

  char ch= 123456;
  cout<< ch << endl;
  
  //it will store a big value or 0 in msb thats why it will generate a very big value as we r printing unsigned value
  unsigned int s  = -123;
  cout << s << endl; 

  return 0;
}