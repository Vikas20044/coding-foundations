#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int>& nums1, vector<int>& nums2){
      vector<int> sortedArray;
      int left = 0, right = 0;

      while(left < nums1.size() && right < nums2.size()){

            if(nums1[left]>nums2[right]){
                  nums1.insert(nums1.begin()+left,nums2[right++]);
                  left++;
            } else if(nums1[left]<=nums2[right]){
                  left++;
            } 


      }

      while(right<nums2.size()){
            nums1.insert(nums1.begin()+left,nums2[right++]);
            left++;
      }
      
}

int main(){
      vector<int> nums1 = {}, nums2={-3, 1};

      mergeSortedArray(nums1,nums2);

      for(int ele: nums1){
            cout << ele << " ";
      }
}