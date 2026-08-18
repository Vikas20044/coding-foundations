#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
bool panagramCheck(string& s){
      if(s.size()<26){
            return false;
      }
      vector<int> freq (26);

      for(char c: s){           
            c = tolower(c);
          
            if(c>='a' && c<='z'){
                  freq[c-'a'] = 1;
            }
          
      }
      for(int ele: freq){
            if(ele==0){
                  return false;
            }
      }

      return true;     
}
int main(){
      string s = "Bawds jog, flick quartz, vex nymph";

      cout << "Is String is panagram : " << panagramCheck(s);
}