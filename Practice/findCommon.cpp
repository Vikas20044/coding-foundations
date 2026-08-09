#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> findDuplicate(const vector<int>& nums1, const vector<int>& nums2){
     
      unordered_set<int> seen(nums1.begin(),nums1.end());
      
      vector<int> result;
      

      for(int ele: nums2){
            if(seen.count(ele)){
                  result.push_back(ele);
                  seen.erase(ele);

            }
      }
      return result;

      
      
}
int main(){
      vector<int> nums1 = {1, 2, 2, 1};
      vector<int> nums2 = {2, 2};
      cout << "The duplicate elements are : " ;
      vector<int> result = findDuplicate(nums1,nums2);

      for(int ele: result) cout << ele << " ";

      cout << endl;
     
}