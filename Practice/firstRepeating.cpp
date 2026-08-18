#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int firstRepeating(const vector<int>& nums){
      unordered_set<int> seen;

      for(int ele: nums){
            if(seen.count(ele)) return ele;

            seen.insert(ele);
      }
      return -1;
}
int main(){
      vector<int> nums = {10, 5, 3, 4, 3, 5, 6};
      cout << "First repeating element : " << firstRepeating(nums);
}