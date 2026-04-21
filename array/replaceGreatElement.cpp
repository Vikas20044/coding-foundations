#include <iostream>
#include <vector>

using namespace std;
void replaceElements(vector<int>& nums){
      int max=-1;
      for(int i=nums.size()-1; i>=0; i--){
            int cele=nums[i];
            nums[i]=max;
            if(cele>max) max=cele;
      }


}
int main(){
      vector<int> n={17,18,5,4,6,1};
      replaceElements(n);
      for(int x: n) cout << x << " ";
}