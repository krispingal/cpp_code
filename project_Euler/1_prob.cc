#include<iostream>

using namespace std;

/*This code is to solve the problem of finding the sum 
  of all multiples of 3 & 5 below 1000
*/

//Function to find sum of all natural numbers
//less than limit
int findSumTillN(int n){
  int sum = (n * (n + 1)) / 2;
  return sum;
}

int sumOfMultiples(int base, int limit){
  int lastMultiplier = limit / base;
  return (base * findSumTillN(lastMultiplier));
}

int main(){
  int a = 3, b = 5, c = 15;
  int sum = sumOfMultiples(3, 1000) + sumOfMultiples(5, 1000) - sumOfMultiples(15, 1000);
  cout<<"Sum :"<<sum<<'\n';
  return 0;
}
  
