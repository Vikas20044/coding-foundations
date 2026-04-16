#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> intersectionArray(vector<int> nums1,vector<int> nums2){
      unordered_set<int> seen;
      vector<int> intersection;
      for(int i=0; i<nums1.size(); i++){
            seen.insert(nums1[i]);
      }
      for(int i=0; i<nums2.size(); i++){
            if(seen.count(nums2[i])){
                  intersection.push_back(nums2[i]);
                  seen.erase(nums2[i]);
            }
      }
      return intersection;

}
int main(){
      vector<int> n1={4,9,5},n2={9,4,9,8,4};

      vector<int> intersectedArray=intersectionArray(n1,n2);
      for(int i: intersectedArray){
            cout << i << " ";
      }
}