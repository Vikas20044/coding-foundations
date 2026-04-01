#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int majorityElement(vector<int> nums){
      int majority;
      unordered_map<int,int> um;
      for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
            if(um[nums[i]]>nums.size()/2) return nums[i]; 

      }
      return -1;
}
int main(){
      vector<int> n={1, 1, 2, 1, 3, 5, 1};
      cout << majorityElement(n); 
}