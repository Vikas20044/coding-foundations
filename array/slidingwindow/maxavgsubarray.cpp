#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double maxAverage(vector<int> nums,int k){
      double average;
      double sum=0.0;
      int idx=0;
      for(int i=0; i<k; i++){
            sum+=nums[i];

      }
     
      
      for(int i=k; i<nums.size(); i++){
            
            sum=sum-nums[idx];
            idx++;
            sum=sum+nums[i];
           
            double curavg=double(sum/k);
            average=max(average,curavg);

      }

      return average;
}
int main(){
      vector<int> n={1,12,-5,-6,50,3};
      int k=4;
      cout << maxAverage(n,k);
}