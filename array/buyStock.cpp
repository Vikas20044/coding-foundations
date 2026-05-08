#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> prices){
      
      int result=0,minimum=prices[0];
      for(int i=1; i<prices.size()-1; i++){
            minimum=min(minimum,prices[i]);
            int cprofit=prices[i]-minimum;
            result=max(result,cprofit);
      }
      return result;
}
int main(){
      vector<int> p={7,1,5,3,6,4};
      cout << maxProfit(p);
}