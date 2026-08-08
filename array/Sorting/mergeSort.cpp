#include <iostream>
#include <vector>
using namespace std;
vector<int> sortArray(vector<int>& nums) {
        mergeSort(0,nums.size()-1,nums);

        return nums;
}
void mergeSort(int low,int high,vector<int>& nums){
        if(low<high){
            int mid=(low+high)/2;
            mergeSort(low,mid,nums);
            mergeSort(mid+1,high,nums);
            merge(low,high,mid,nums);
        }
}

void merge(int low,int high, int mid, vector<int>& nums){
        vector<int> arr;
        int l=low,r=mid+1;
        while(l<=mid && r<=high){
            if(nums[l]<=nums[r]){
                arr.push_back(nums[l]);

            }
            else arr.push_back(nums[r]);
        }

        while(l<=mid){
            arr.push_back(nums[l]);
        }

        while(r<=high){
            arr.push_back(nums[r]);
        }
        nums = arr;
}
int main(){
      vector<int> a = {10,4,3,9};
      sortArray(a);

      for(int x: a) cout << x << " ";
}