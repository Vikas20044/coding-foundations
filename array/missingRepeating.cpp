#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int missingRepeating(const vector<int>& nums){
      int n = nums.size();
      int sum = (n*(n+1))/2;
      unordered_set<int> seen;
      int duplicate;
      
      for(int ele: nums){
            if(seen.count(ele)) duplicate = ele;
            else{
                  seen.insert(ele);
                  sum-=ele;
            }
            
      }

      return duplicate + sum;


}
int main(){
      vector<int> nums={1, 2, 3, 5, 5};

      cout << "Sum of missing and repeating number : " << missingRepeating(nums);
}
