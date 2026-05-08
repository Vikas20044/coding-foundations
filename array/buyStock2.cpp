#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> prices){
      int result=0;
      for(int i=1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){
                  result+=prices[i]-prices[i-1];
            }
            
      }
      return result;
}
int main(){
      vector<int> p={1,7,2,3,6,7,6,7};
      cout << maxProfit(p);
}