#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
int firstUniqueChar(string s){
      unordered_map<char,int> seen;

      for(int i=0; i<s.size(); i++){
            char c=s[i];
            seen[c]++;
      }

      for(int i=0; i<s.size(); i++){
            if(seen[s[i]]==1) return i;
      }
      return -1;
}
int main(){
      string s="leetcode";
      cout << firstUniqueChar(s);
}