#include <iostream>
#include <string>
using namespace std;
int strStr(string s1,string s2){
      int l=0;
      int s1s=s1.size(),s2s=s2.size();
      while(l<=(s1s-s2s)){
            int r=0,il=l;

            while(r<s2s){
                  if(s1[il]!=s2[r]){
                        l++;
                        break;
                  }
                  else{
                        il++;
                        r++;
                        if(r==s2s){
                              return l;
                        }
                  }
            }
      }

      return -1;

}
int main(){
      string s1="abc",s2="c";
      cout << strStr(s1,s2);
}