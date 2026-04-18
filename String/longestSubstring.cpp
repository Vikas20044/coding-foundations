#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int longestSubstring(string s){
      int maxlength=0;
      int l=0;
      unordered_set<char> seen;

      for(int r=0; r<s.size(); r++){
            if(seen.count(s[r])){
                  seen.erase(s[r]);
                  l++;
            }
            seen.insert(s[r]);
            maxlength=max(maxlength,r-l+1);
      }

      /*

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
      */
      return maxlength;
}
int main(){
      string s="pwwkew";
      cout << longestSubstring(s);
}