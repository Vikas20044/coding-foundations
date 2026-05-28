#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool arrayEqual(vector<int> nums1,vector <int> nums2){
      unordered_map<int,int> seen;
      

      for(int i=0; i<nums1.size(); i++){
            seen[nums1[i]]++;
      }

      cout << endl;
      for(int i=0; i<nums2.size(); i++){
            seen[nums2[i]]--;
      }
      for(auto s: seen){
            if(s.second!=0) return false;
      }

      return true;
}
int main(){
      vector<int> n1={1, 2, 5, 4, 0},n2={2, 4, 5, 0, 1};
      cout << arrayEqual(n1,n2);
}