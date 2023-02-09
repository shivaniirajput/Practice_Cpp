#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i=1;
  while(i<=n)
  {
    //print space
    int space = n-i;
    while(space)
    {
      cout<<" ";
      space = space = space-1;
    }
    //print stars
    int j=1;
    while(j<=i)
    {
      cout<<"*";
      j=j+1;
    
    }
    cout<<endl;
    i=i+1;

  }

}