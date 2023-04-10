#include<iostream>
using namespace std;

int main()
{
//power of a number
 int a,b;
 int ans = 1;
 cin>> a >> b;

 for(int i=1 ; i<=b ; i++)
 {
  ans = ans*a;
 }
 cout<<"answer is :" << ans << endl;

 int c,d;
 int ans1 = 1;
 cin>> c >> d;

 for(int i=1 ; i<=d; i++)
 {
  ans1 = ans1*c;
 }
 cout<<"answer is :" << ans1 << endl;
 return 0;





}

