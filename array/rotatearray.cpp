#include <iostream> // Leetcode 189
#include <algorithm>
#include <vector>
using namespace std;
void rotateArray(vector<int>& nums,int k){
      k=k%nums.size();
     
      reverse(nums.begin(),nums.end());
      reverse(nums.begin(),nums.begin()+k);
      reverse(nums.begin()+k,nums.end());
      
}
int main(){
      vector<int> n={1,2,3,4,5,6,7};
      int k=3;
      rotateArray(n,k);
      for(int i: n){
            cout << i << " ";
      }
}