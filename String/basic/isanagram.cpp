#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool isAnagram(string s1,string s2){
      unordered_map<char,int> seen;

      if(s1.size()!=s2.size()) return false;

      for(int i=0; i<s1.size(); i++){
            char c=s1[i];
            seen[c]++;
      }
      

      for(int i=0; i<s2.size(); i++){
            char c=s2[i];

            seen[c]--;
      }
      

      for(auto i: seen){
            
            if(i.second!=0) return false;
      }
      return true;


      
}
int main(){
      string s1="geeks",s2="kseeg";
      if(isAnagram(s1,s2)){
            cout << "True";
      }
      else{
            cout << "False";
      }
}