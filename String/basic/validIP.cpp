#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
bool validIP(string& s){

      if(s.size()>15 || s.size()<8) return false;

      
      int dotCount = 0;
      int l=0;

      while(l<s.size()){
           
            string segments = "";
            while(s[l]!='.' && l<s.size()){
                  if(s[l]=='0'){
                        if(l<s.size()-1 && s[l+1]!='.') return false;
                       
                  } 
                  if(!isdigit(s[l])){
                        return false;
                  }
                  segments+=s[l];
                  
                  l++;
                     
            }
            

            l++;
            if(l<s.size() && !isdigit(s[l])){
                  return false;
            }
            dotCount++;
            if(dotCount>4){
                  return false;
            }
           
            if(l<s.size()){
                  if(s[l]=='.') return false;
            }
            int ip = stoi(segments);
            cout << ip << endl;
          
            if(ip<0 || ip>255){
                  
                  return false;
            }           

      }
      if(dotCount<4) return false;

      return true;
}
int main(){
      string s = "192.01.4.0";

      cout << "Is Valid IP : " << validIP(s);
}