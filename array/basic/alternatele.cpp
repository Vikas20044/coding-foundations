#include <iostream>
#include <vector>
using namespace std;
void printAlternate(vector<int> nums){
      for(int i=0; i<nums.size(); i+=2){
            cout << nums[i] << " ";
      }

}

int main(){
      vector<int> n={-5, 1, 4, 2, 120};
      printAlternate(n);
      cout << endl;
      
}