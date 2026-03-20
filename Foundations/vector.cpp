#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
      vector<int> nums={1,2,3,4}; // Vector array

      nums.push_back(5); // insert at end

      for(int i: nums){ //printing elements O(n)
            cout << i << " ";
      }

      cout << endl;

      nums.insert(nums.begin()+0,7); //insert at begining or middle

      cout << endl;

      cout << nums[0]; // Access eleemnts O(1)

      cout << endl;

      cout << nums.size(); // Vector size

      nums.pop_back(); // Deleting element at end : O(1)

      cout << endl;

      for(int i: nums){ //printing elements O(n)
            cout << i << " ";
      }

      nums.erase(nums.begin()+2);

       cout << endl;

      for(int i: nums){ //printing elements O(n)
            cout << i << " ";
      }

      cout << endl;

      reverse(nums.begin(),nums.end()); // reverse the vector

      for(int i: nums){ //printing elements O(n)
            cout << i << " ";
      }

      cout << nums.empty(); //IS vector is empty



}


