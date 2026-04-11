#include <iostream>
#include <vector>
using namespace std;
void prefixSumArray(vector<int> &nums){
   
      for(int i=1; i<nums.size(); i++) nums[i]+=nums[i-1];
}
int main(){
      vector<int> n={10,20,10,5,15};
      prefixSumArray(n);
      for(int x: n){
            cout << x << " ";
      }
}