#include <iostream>
#include <vector> 
using namespace std;

int removeDuplicates(vector<int>& nums){
      int count = 0;

      if (nums.size() == 1) {
            return 1;
      }
        int index = 1;
        int i = 0;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {

                if (count < 2) {
                    swap(nums[index++], nums[i]);
                }
            } else {
                count = 0;
                swap(nums[index++], nums[i]);
            }
        }
   
        return index;
}
int main(){
      vector<int> nums = {0,0,1,1,1,1,1,1,2,2,2,3,3};

      int index = removeDuplicates(nums);

      for(int i=0; i<index; i++){
            cout << nums[i] << " ";
      }
}