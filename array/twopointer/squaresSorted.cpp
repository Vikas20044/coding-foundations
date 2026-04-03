#include <iostream>
#include <vector>
using namespace std;
vector<int> squaresSorted(vector<int> nums){
      int l=0,r=nums.size()-1;
      while(l<r){
            int le=abs(nums[l])*abs(nums[l]);
            int re=abs(nums[r])*abs(nums[r]);
            if(le>re){
                  nums.push_back(le);
                  nums.erase(nums.begin()+l);

            }
            else{
                  l++;
                  r--;
            }

      }
      return nums;
}
int main(){
      vector<int> n={-4,-1,0,3,10};
      vector<int> res=squaresSorted(n);
      for(int i: res) cout << i << " ";

}