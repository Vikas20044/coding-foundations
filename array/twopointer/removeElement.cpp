#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int removeElement(vector<int> &nums,int val){
      int l=0,r=nums.size()-1;
      
      while(l<=r){
            if(nums[r]==val){
                  r--;
            }
            else{
                  
                  if(nums[l]==val){
                        cout<< l << " " << nums[l] << " " << nums[r] << endl;
                        nums[l]=nums[r];
                        
                      
                        r--;
                        
                  }
                  l++;
                
            }
      
      }
      return l;
}
int main(){
      vector<int> n={0,1,2,2,3,0,4,2};
      int val=2;
      int res=removeElement(n,val);
      for(int i=0; i<res; i++){
            cout << n[i] << " ";
      }

}