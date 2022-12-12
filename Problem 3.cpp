#include <iostream>
#include <vector>
using namespace std;
int main (){
vector<long> num1;
long total = 600851475143;
for (long i = 2; i <= total ; i ++){
  if (total % i == 0){
    total /= i;
    num1.push_back(i);
    }
}
for (int i: num1 ){
  
  cout << i << endl;
}
return 0;
  }
