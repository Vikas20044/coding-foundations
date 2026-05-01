#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> nextGreatElement(vector<int> n1,vector<int> n2){
      unordered_map<int,int> seen;
      vector<int> res;
      for(int i=0; i<n2.size(); i++){
            seen[n2[i]]=i+1;
      }
      
      for(int i=0; i<n1.size(); i++){
            int ele=-1;
            for(int j=seen[n1[i]]; j<n2.size(); j++){
                  if(n2[j]>n1[i]){
                        ele=n2[j];
                        break;
                  }
            }
            res.push_back(ele);
      }
      return res;

}
int main(){
      vector<int> n1={2,4},n2={1,2,3,4};
      vector<int> res=nextGreatElement(n1,n2);
      for(int x: res) cout << x << " ";
}