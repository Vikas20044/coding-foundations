#include <iostream>
#include <cmath>
using namespace std;

bool sumOfSquares(int c){
      if(c==0){
            return true;
        }
        

        long long low = 0, high = sqrt(c);

        long long curSum = 0;

        
        while(low<=high){
            cout << low << " " << high << endl;
            long long squareLeft = low * low;
            long long squareRight = high * high;

            if(squareLeft==c || squareRight==c){
                return true;
            }

            curSum = squareLeft + squareRight;

            if(curSum==c){
                return true;
            }
            if(curSum>c){
                high--;
            } else if(curSum<c){
                low++;
            }
        }

        return false;
}
int main(){
      cout << sumOfSquares(2147483647);
}