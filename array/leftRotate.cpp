#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotate(vector<int>& nums,int k){
      if(nums.size()==0 || nums.size()==1) return;
      if(k==0 || k==1) return;
     
      k = k% nums.size();

      reverse(nums.begin(),nums.begin()+(k-1));
     
      reverse(nums.begin()+k,nums.end());
      reverse(nums.begin(),nums.end());

      
     
      

}
int main(){
      vector<int> nums={1, 2, 3, 4, 5};
      int k=7;

      leftRotate(nums,k);

      for(int ele: nums) cout << ele << " ";

      cout << endl;
}