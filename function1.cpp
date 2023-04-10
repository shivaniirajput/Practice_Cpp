#include<iostream>
using namespace std;

//creating a power function
int power(int a , int b)
{
  int ans = 1;

  for(int i=1 ; i<=b ; i++){
    ans = ans*a;
  }
  return ans;
}

//main function
int main()
{
  int a,b;
  //taking input at run time
  cout<<"Enter the values of a and b:"<< endl;
  cin>> a >>b;

  //calling power function first time
  int answer = power(a,b);
  cout<<"answer is:"<< answer << endl;

   int c,d;
  //taking input at run time
  cout<<"Enter the values of a and b:"<< endl;
  cin>> c >>d;

  //calling power function first time
  int answer1 = power(c,d);
  cout<<"answer is:"<< answer1 << endl;

  return 0;
}