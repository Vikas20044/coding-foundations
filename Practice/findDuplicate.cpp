#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> findDuplicate(vector<int> nums){
      if(nums.size()==1) return { };
      unordered_map<int,int> seen;
      vector<int> result;
      for(int ele: nums){
            seen[ele]++;
      }

      for(auto p: seen){
            if(p.second>1) result.push_back(p.first);
      }
      
      return result;
}
int main(){
      vector<int> nums = {-1, 2, -1, 0, 3, 2, 0};
      vector<int> result = findDuplicate(nums);
      cout << "The duplicate elements are : " ;

      for(int ele: result) cout << ele << " ";

      cout << endl;
}