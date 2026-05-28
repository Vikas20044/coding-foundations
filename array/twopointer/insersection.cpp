#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> intersection(vector<int> nums1,vector<int> nums2){
      unordered_set<int> seen;
      vector<int> res;
      for(int i: nums1) seen.insert(i);

      for(int i: nums2) if(seen.count(i)) res.push_back(i);

      return res;

      
}
int main(){
      vector<int> n1={5, 6, 2, 1, 4 },n2={7, 9, 4, 2 };
      vector<int> res=intersection(n1,n2);

      for(int x: res) cout << x << " ";

}