#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int firstRepeating(vector<int> nums){
      unordered_set<int> seen;
      int n=nums.size();
      for(int i=0; i<n; i++){
            if(seen.count(nums[i])) return nums[i];

            seen.insert(nums[i]);

      }

      return 0;
}
int main(){
      vector<int> n={0,5,6,9,6,5,8,3,2,1};
      cout << firstRepeating(n);
}