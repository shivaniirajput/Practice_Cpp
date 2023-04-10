#include<iostream>
using namespace std;

//function signature
void counting ( int num )
{
  //function body
 for ( int i=1 ; i<=num ; i++)
 {
  cout << i << endl;
 }
}

int main()
{
  int n;
  cin >> n;
  counting(n);
  
}