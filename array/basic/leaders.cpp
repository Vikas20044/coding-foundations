#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> leadersArray(vector<int> nums){    
      vector<int> result;
      int max=INT32_MIN;
      for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>=max){
                  result.push_back(nums[i]);
                  max=nums[i];
            }
      }
      reverse(result.begin(),result.end());
      return result;
}
int main(){
      vector<int> n={1, 2, 3, 4, 5, 2};
      vector<int> res=leadersArray(n);

      for(int i: res){
            cout << i << " ";
      }

}