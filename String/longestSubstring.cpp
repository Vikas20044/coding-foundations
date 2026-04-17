#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int longestSubstring(string s){
      int maxlength=0;
      int l=0,r=s.size()-1;
      unordered_set<char> seen;

      while(l<=r){
            int cmax=0;
            int j=l;
            while(j<=r){
                  if(seen.count(s[j])){
                        
                        seen.clear();
                        break;
                  }
                  else{
                        seen.insert(s[j]);
                        cmax++;
                  }
                  j++;
                  
            }
            maxlength=max(maxlength,cmax);
            l++;
      }
      return maxlength;
}
int main(){
      string s="pwwe";
      cout << longestSubstring(s);
}