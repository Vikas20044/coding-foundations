#include <iostream>
#include <vector>
using namespace std;
int buyStock(vector<int> nums){
      int res=0;
      int minm=nums[0];
      for(int i=1; i<nums.size(); i++){
            
            minm=min(nums[i],minm);
            int cres=nums[i]-minm;
            res=max(cres,res);


      }
      return res;
} 

int main(){
      vector<int> n={7, 10, 1, 3, 6, 9, 2};
      cout << buyStock(n);
}