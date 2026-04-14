#include <iostream>
#include <string>
using namespace std;
bool isVowel(char c){
      if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
      }
      return false;;
}
void reverseVowel(string &s){
      int l=0,r=s.size()-1;

      while(l<r){
            if(!isVowel(s[l])) l++;
            else if(!isVowel(s[r])) r--;
            else{
                  swap(s[l],s[r]);
                  l++;
                  r--;

            }


      }
}
int main(){
      string s="IceCreAm";
      reverseVowel(s);
      cout << s;
}