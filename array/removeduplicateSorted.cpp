#include <iostream> //leetcode 26
#include <vector>
#include <unordered_set>
using namespace std;
int removeDuplicateSorted(vector<int>& nums){
      int idx=1;
      
      for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                  nums[idx]=nums[i];
                  idx++;
            }
            
      }
      return idx;
      
}
int main(){
      vector<int> n={1, 2, 2, 3, 4, 4, 4, 5, 5};
      int newIdx=removeDuplicateSorted(n);

      for(int i=0; i<newIdx; i++){
            cout << n[i] << " ";
      }
}