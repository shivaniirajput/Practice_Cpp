#include<iostream>
using namespace std;

//creating power function
int power()
{
  int num1 , num2;
  cin >> num1 >> num2;
  int ans = 1;

  for(int i=1 ; i<=num2 ; i++)
  {
    ans = ans * num1;
  }
  return ans;
}

//main function
int main()
{
  //using a variable to store value of function
  int Answer1 = power();
  cout << "Answer is:" << Answer1 << endl;

  int Answer2 = power();
  cout << "Answer is:" << Answer2 << endl;

  int Answer3 = power();
  cout << "Answer is:" << Answer3 << endl;
  
  //fuction calling directly
  cout << power() << endl;
  return 0;
}