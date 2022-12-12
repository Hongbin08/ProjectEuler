#include <iostream>
using namespace std;
int main (){
  int a = 1;
  int b = 2;
  int sum = b;
  while(sum <= 4000000){
    int temp = a;
    a = b;
    b += temp;
    if (b % 2 == 0){
    sum += b;
    }
    }
  cout << sum;
  return 0;
}