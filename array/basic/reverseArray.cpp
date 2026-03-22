#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int>& nums){
      int l=0,r=nums.size()-1;
      while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
            
      }
}
int main(){
      vector<int> n={1, 4, 3, 2, 6, 5};
      reverseArray(n);
      for(int i: n){
            cout << i << " ";
      }

}