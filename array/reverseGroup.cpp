#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverseGroup(vector<int>& nums,int k){
      int start = 0;
      int n=nums.size();
      while(start<nums.size()){
            int end = min(n,start+k);
            reverse(nums.begin()+start,nums.begin()+(end));
            start+=k;
      }


}
int main(){
      vector<int> nums={1, 2, 3, 4, 5};
      int k = 3;
      reverseGroup(nums,k);

      for(int ele: nums) cout << ele << " ";

      cout << endl;


      
}
