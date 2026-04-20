#include <iostream>
#include <vector>
using namespace std;
int main(){
      vector<vector<int>> nums={
            {1,2,3,6},
            {4,5,6},
            {7,8,9}};
      cout << nums.size(); // row size
      cout << nums[0].size();

}