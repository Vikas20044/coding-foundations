#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> reverseArray(vector<int> nums,int k){
      int l=0,n=nums.size()-1;
      while(l<nums.size()){
            int r=min(k-1,n);
            
            while(l<r){
                  swap(nums[l],nums[r]);
                  l++;
                  r--;
            }
            l=k;
            k=k+k;

      }
      return nums;
}
int main(){
      vector<int> n={1, 2, 3, 4, 5, 6, 7, 8};
      int k=3;
      n=reverseArray(n,k);
      for(int i: n) cout << i << " ";
}