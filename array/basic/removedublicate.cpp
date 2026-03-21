#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void removeDuplicate(vector<int>& nums){
      unordered_set<int> us;
      vector<int> res;
      for(int i=0; i<nums.size(); i++){
            if(!(us.count(i))){
                  us.insert(nums[i]);
                  res.push_back(nums[i]);
                  
            }
            
      }
      nums=res;
}
int main(){
      vector<int> n={14, 2, 8, 14, 5, 2, 11};
      removeDuplicate(n);

      for(int i: n){
            cout << i << " ";
      }
}