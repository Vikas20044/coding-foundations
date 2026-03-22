#include <iostream>
#include <vector>
using namespace std;
void printSubarray(vector<int> nums){
      for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                  for(int k=i; k<=j; k++){
                        cout << nums[k] << " ";
                  }
                  cout <<" ";
            }
      }

}
int main(){
      vector<int> n={1, 2, 3};
      printSubarray(n);

}