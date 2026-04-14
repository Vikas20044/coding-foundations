#include <iostream>
#include <unordered_set>
#include <math.h>
using namespace std;
bool happyNumber(int n){
      unordered_set<int> seen;
      int num=n;
      while(true){
            int sum=0;
            cout << num << " ";

            while(num>0){
                  sum=sum+pow(num%10,2);
                  num/=10;
            }

            if(sum==1) return true;

            if(seen.count(sum)) break;

            seen.insert(sum);
            num=sum;

      }
      return false;
}
int main(){
      if(happyNumber(19)){
            cout << "True";
      }
      else{
            cout << "False";
      }
}