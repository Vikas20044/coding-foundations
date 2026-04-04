#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> squaresSorted(vector<int> nums){
      int l=0,r=nums.size()-1,idx=0;
      vector<int> res;
      while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                  res.insert(res.begin(),pow(nums[l],2));
                  l++;
            }
            else{
                  res.insert(res.begin(),pow(nums[r],2));
                  r--;
            }
            
      }
      return res;
}
int main(){
      vector<int> n={-7,-3,2,3,11};
      vector<int> res=squaresSorted(n);
      for(int i: res) cout << i << " ";

}