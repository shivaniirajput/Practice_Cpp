#include<iostream>
using namespace std;

//finding waiting time
void findWaitingTime(int processes[] , int n , int bt[] , int at[] )
{
ct[0] = bt[0] + at[0];

for ( int i = 1 ; i < n ; i ++ )
{
  ct[i]=bt[i] + ct[i-1];
}
}




int main( )
{
  int processes[ ] = {1,2,3,4};
  int n = sizeof processes / sizeof processes[ 0 ];
  int arrivalTime[ ] = {0,0,2,5};
  int burstTime[ ] = {3,2,1,3};

  findWaitingTime(processes , n , burstTime , arrivalTime);


}
