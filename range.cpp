#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
  cout<<"size of char:"<< sizeof(char)<<"byte"<< endl;
  cout<<"char minimum value:"<<CHAR_MIN<<endl;
  cout<<"char maximum value"<<CHAR_MAX<< endl;

  cout<<"size of int:"<< sizeof(int)<<"byte"<< endl;
  cout<<"size of short int:"<<sizeof(short int)<<"bytes"<<endl;
  cout<<"size of long int"<<sizeof(long int)<<"bytes"<< endl;

  cout<<"size of signed long int:"<< sizeof(signed long int)<<"byte"<< endl;
  cout<<"size of unsigned long int:"<< sizeof(unsigned long int)<<"byte"<< endl;
  cout<<"size of float:"<< sizeof(float)<<"byte"<< endl;
  cout<<"size of double:"<< sizeof(double)<<"byte"<< endl;
  cout<<"size of wchar_t:"<< sizeof(wchar_t)<<"byte"<< endl;
  return 0;
}