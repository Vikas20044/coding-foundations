#include <iostream>
#include <vector>
using namespace std;
void mergeSortedArray(vector<int> &nums1,int n,vector<int> &nums2,int m){
      int l=n-1,r=m-1;
      int idx=n+m-1;
      while(l>=0 && r>=0){
            if(nums1[l]>nums2[r]){
                  nums1[idx]=nums1[l];
                  l--;

            }
            else{
                  nums1[idx]=nums2[r];
                  r--;
            }
            idx--;
      }
      while(r>=0){
            nums1[idx]=nums2[r];
            idx--;
            r--;
      }

      
}
int main(){
      vector<int> nums1={4,5,6,0,0,0},nums2={1,2,3};
      int n=3,m=3;
      mergeSortedArray(nums1,n,nums2,m);
      for(int i: nums1){
            cout << i << " ";
      }
}