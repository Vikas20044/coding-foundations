#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> countDistinct(vector<int> &nums, int k) {
        
      unordered_map<int,int> freq;
      int count = 0;
      vector<int> result;
      for(int i=0; i<k; i++){
            if(freq.count(nums[i])){
                freq[nums[i]]++;
            } else{
                count++;
                freq[nums[i]]++;
            }
      }
      result.push_back(count);
      int left = 0;
      for(int i=k; i<nums.size(); i++){
            
            
            freq[nums[left]]--;
            if(freq[nums[left]]==0 || freq[nums[left]]<0){
                freq.erase(nums[left]);
                count--;
            }

            
            
            if(freq.count(nums[i])){
                freq[nums[i]]++;    
            } else{
                count++;
                freq[nums[i]]++;
            }
            for(auto it: freq){
                  cout << it.first << " " << it.second << endl;
            }
            cout << endl;
            result.push_back(freq.size());
            left++;
            
            
      }
      return result;
}

int main(){
      vector<int> nums = {1, 2, 1, 3, 4, 2, 3};
      vector<int> result = countDistinct(nums,4);
      for(int ele: result){
            cout <<ele << " ";
      }
}