#include <iostream>
#include <vector>
using namespace std;
double meadianArray(vector<int> nums1,vector<int> nums2){
      vector<double> nums3;
      double res;
      int l=0,r=0,n1=nums1.size(),n2=nums2.size();
      while(l<n1 && r<n2){
            if(nums1[l]<nums2[r]) nums3.push_back(nums1[l++]);

            else nums3.push_back(nums2[r++]);
      }
      while(l<n1) nums3.push_back(nums1[l++]);

      while(r<n2) nums3.push_back(nums2[r++]);

    
      int s=nums3.size();
  
      if(s%2==1){
            res=nums3[s/2.00000];
            return res;
      } 
      else{
            res=nums3[s/2]+nums3[(s/2)-1];
            return res/2.00000;

      }
      return 0;

}
int main(){
      vector<int> n1={1,2};
      vector<int> n2={3,4};
      cout << meadianArray(n1,n2);
}