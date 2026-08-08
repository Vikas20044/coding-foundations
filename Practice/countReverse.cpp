#include <iostream>
using namespace std;
void countReverse(int num){
      int count = 0;
      int reverse = 0;
      while(num>0){
          
            reverse = reverse*10 + num%10;
            num/=10;
            count++;

      }
      cout << "Count of the digits : " << count << endl;

      cout << "Reverse of number : " << reverse;

}
int main(){
      int n = 12345;

      countReverse(n);
}