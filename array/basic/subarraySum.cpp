#include <iostream>
#include <vector>
using namespace std;
int subArraySum(vector<int> nums){
      int sum=0;
      for(int i=0; i<nums.size(); i++){
            sum=sum+(nums[i]*(i+1)*(nums.size()-i));
            
      }
      return sum;

}
int main(){
      vector<int> n={1,4,5,3,2};
      cout << subArraySum(n);
}