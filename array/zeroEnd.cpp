#include <iostream> //Leetcode 283
#include <vector>
using namespace std;
void movezerosEnd(vector<int>& nums){
      int idx=0;
      for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                  swap(nums[idx],nums[i]);
                  idx++;

            }
      }
}
int main(){
      vector<int> n={1, 2, 0, 4, 3, 0, 5, 0};
      movezerosEnd(n);
      for(int i: n){
            cout << i << " ";
      }
}