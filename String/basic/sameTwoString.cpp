#include <iostream>
#include <string>
using namespace std;
bool isSameTwoString(string s1,string s2){
      if(s1.size()!=s2.size()){
            return false;
      }
      for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
                  return false;
            }
      }
      return true;
}
int main(){
      string s1="abc",s2="abc";
      if(isSameTwoString(s1,s2)){
            cout << "True";
      }
      else{
            cout << "False";
      }
}