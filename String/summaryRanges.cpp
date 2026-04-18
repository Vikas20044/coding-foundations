#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> summaryRanges(vector<int> nums){
      vector<string> result;
      int i=0;
      while(i < nums.size()){
            int start=nums[i];

            while(i<nums.size()-1 && nums[i]+1 == nums[i+1]) i++;

            if(start != nums[i]) result.push_back(to_string(start)+"->"+to_string(nums[i]));

            else result.push_back(to_string(start));

            i++;

      }
      return result;
}
int main(){
      vector<int> n={1,2,3,5,8,9};
      vector<string> result=summaryRanges(n);
      for(auto x: result) cout << x << " ";
}