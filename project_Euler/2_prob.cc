#include<iostream>

using namespace std;

/* This is to solve the problem of finding the sum of 
   all even Fibonacci numbers < 4,000,000
*/

int main(){
  int fibN = 1;
  int fibNplus1 = 2;
  unsigned int sum = 2;
  int temp = 0;
  bool flag = true;
  while(true){
    temp = fibNplus1 + fibN;
    if (temp >= 4000000)
      break;
    if (temp % 2 == 0)
      sum += temp;
    fibN = fibNplus1;
    fibNplus1 = temp;
  }
  cout<<"Sum = "<<sum<<"\n";
  return 0;
}
