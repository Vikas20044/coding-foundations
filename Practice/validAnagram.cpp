#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
bool validAnagram(const string& s,const string& t){
      if(s.size()==0 && t.size()==0) return true;

      if(s.size()==0 || t.size()==0) return false; // handling if any one of string is empty
      unordered_map<char, int> freq;

      for(char c: s) freq[c]++;

      for(char c: t){
            freq[c]--;
            if(freq[c]<0) return false;
      }

      for(const auto p: freq){
            if(p.second!=0) return false;
      }

      return true;

}
int main(){
      string s="anagram",t="anagram";

      if(validAnagram(s,t)) cout << "Valid Anagram.";

      else cout << "Not valid Anagram.";
}