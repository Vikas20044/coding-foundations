#include <iostream>
#include <string>
using namespace std;
void remoeOccurances(string &s,char c){
      int l=0;
      while(l<s.size()){
            if(s[l]==c) s.erase(s.begin()+l);
            
            else l++;
      }
}
int main(){
      string s="geeksforgeeks";
      char c='k';

      remoeOccurances(s,c);

      cout << s;

}