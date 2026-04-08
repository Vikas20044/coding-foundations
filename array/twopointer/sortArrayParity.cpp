#include <iostream>
#include <vector>
using namespace std;
void sortArrayByParity(vector<int>& nums) {
      int l=0,r=nums.size()-1;
      while(l<r){
            if(nums[l]%2==0){
                l++;
                continue;
            }
            if(nums[r]%2==1){
                r--;
                continue;
            }

            else{
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
      }
     
}
int main(){
      vector<int> n={3,1,2,4};
      sortArrayByParity(n);
      for(int i: n){
            cout << i << " ";
      }


}