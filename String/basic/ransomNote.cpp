#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
bool ransomNote(string r,string m){
      unordered_map<char,int> seen;
      for(int i=0; i<m.size(); i++) seen[m[i]]++;

      for(int i=0; i<r.size(); i++){
            cout << r[i] << " " << seen[r[i]] << endl;
            if(seen.count(r[i]) && seen[r[i]]!=0) seen[r[i]]--;

            else return false;

      }    
      return true;
}
int main(){
      string r="aa",m="aab";
      if(ransomNote(r,m)) cout << "True";

      else cout << "false";
}