#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string s){
      int l=0,r=s.size()-1;
      while(l<r){
            if(s[l]!=s[r]) return false;

            l++;
            r--;
      }
      return true;
}
int main(){
      string s="abba";
      if(checkPalindrome(s)){
            cout << "True";
      }
      else{
            cout << "False";
      }
}