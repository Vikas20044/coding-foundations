#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int>& nums,int k){
      int l=0,n=nums.size()-1;
    
      while(l<nums.size()){
            int r=min(n,k-1);
            while(l<r){
                  swap(nums[l],nums[r]);
                  l++;
                  r--;
            }
            l=k;
            k+=k;
            
      }
      
}
int main(){
      vector<int> n={1, 2, 3, 4, 5, 6, 7, 8};
      reverseArray(n,3);
      for(int x: n) cout << x << " ";

}