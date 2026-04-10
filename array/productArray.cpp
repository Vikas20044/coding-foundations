#include <iostream>
#include <vector>
using namespace std;
vector<int> productArray(vector<int>& nums){
      vector<int> result(nums.size());
      int l=1,r=1;
      for(int i=0; i<nums.size(); i++){
            result[i]=l;
            l=l*nums[i];

      }
      
     

      for(int i=nums.size()-1; i>=0; i--){
            result[i]*=r;
            r=r*nums[i];
            
      }

      return result;
     

}
int main(){
      vector<int> n={1,2,3,4};
      vector<int> res=productArray(n);
      for(int i: res){
          cout << i << " ";
      }
}