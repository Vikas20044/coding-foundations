#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums){
      int low=0,mid=0,high=nums.size()-1;
      while(mid<=high){
            if(nums[mid]==0) swap(nums[low++],nums[mid++]);

            else if(nums[mid]==2) swap(nums[high--],nums[mid]);

            else mid++;

      }
}
int main(){
      vector<int> n={2,0,1};
      sortColors(n);
      for(int x: n) cout << x << " ";
}