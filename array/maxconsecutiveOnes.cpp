#include <iostream> //Leetcode 485
#include <vector>
using namespace std;
int maxOnes(vector<int> nums){
      int result=0,l=0;
      int cres=0;
      while(l<=nums.size()){
            if(nums[l]==1){
                  cres++;
            }
            else{
                  result=max(result,cres);
                  cres=0;
            }
            l++;
      }
      return max(result,cres);



      /*
      while(l<nums.size()){
            int cres=0,idx=0;
            for(int i=l; i<nums.size(); i++){
                  cout << nums[i] << " ";
                  idx++;
                  if(nums[i]==1){
                        cres++;
                  }
                  else{
                        result=max(result,cres);
                        break;
                  }
            }
            l=idx+1;
      }*/

      return result;

}
int main(){
      vector<int> n={1,1,0,1};
      cout << maxOnes(n);
}