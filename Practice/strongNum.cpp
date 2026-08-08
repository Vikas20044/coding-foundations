#include <iostream> 
using namespace std;
int fact(int n){
      int fact=1;
      for(int i=n; i>=1; i--){
            fact = fact*i;
      }

      return fact;
}
bool strongNum(int num){
      int sum = 0;
      int num1 = num;
      while(num1>0){
            
            sum += fact(num1%10);
         
            num1/=10;

      }

      return sum==num;
}
int main(){
      int num = 40585;

      if(strongNum(num)) cout << "Number is strong." << endl;

      else cout << "Number is not strong" << endl;

      for(int i=1; i<1000000; i++){
            if(strongNum(i)) cout << i << endl;
      }
}