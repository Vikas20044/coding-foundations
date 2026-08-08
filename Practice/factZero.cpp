#include <iostream>
using namespace std;

int zeros(int num){
      if(num<=0) return 0;
      long long fact = 1;
      for(long i=num; i>1; i--){
            fact*=i;
      }
      int countZero = 0;

      

      cout << fact;
      while(fact>0){
            if(fact%10==0) {
                  countZero++;
                  fact/=10;
            }

            else break;
      }
      return countZero;
}
int main(){
      int num = 20;

      cout << "Leading zeros : " << zeros(num);
}