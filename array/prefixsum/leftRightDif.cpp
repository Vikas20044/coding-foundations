#include <iostream>
#include <vector>
using namespace std;
vector<int> leftrightDif(vector<int> nums){
      int n=nums.size();
      vector<int> left(n),right(n),result(n);

      left[0]=0;

     
      for(int i=1; i<n; i++) 
      {
            left[i]=left[i-1]+nums[i-1];
      }

      right[n-1]=0;
      for(int i=n-2; i>=0; i--){
            right[i]=right[i+1]+nums[i+1];
            result[i]=abs(right[i]-left[i]);
      }

      for(int i=1; i<n; i++){
           
            result[i]=abs(right[i]-left[i]);
      }

      return result;
      
}
int main(){
      vector<int> n={10,4,8,3};
      vector<int> res=leftrightDif(n);
      for(int x: res){
            cout << x << " ";
      }
}