#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int longStr(const string& s){
      unordered_set<char> seen;
        
      int l=0,r=0;
      int longStr=0, curStr;
      while(r<s.size()){
           
            curStr = 0;
            r=l;
            while(r<s.size()){
                  if(seen.count(s[r])){
                        longStr = max(longStr, curStr);
                        seen.clear();
                        break;
                  }
                
                  else{
                        seen.insert(s[r]);
                    
                        curStr++;
                        r++;
                  }
            }
            l=r;
            r=r;
            
      }
        
      return longStr;
}
int main(){
      string s = "geiifhgf";

      cout << "Longest Substring without repeating character : " << longStr(s);
}