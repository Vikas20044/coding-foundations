#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int secondLargest(vector<int> nums){
      int largest=-1,second=-1;
      for(int i=0; i<nums.size(); i++){
            if(nums[i]>second && nums[i]<largest) second=nums[i];

            else if(nums[i]>largest){
                  second=largest;
                  largest=nums[i];
            }
            
      }
      
      return second;
}
int main(){
      vector<int> n={10,13,12};
      cout << secondLargest(n);
}