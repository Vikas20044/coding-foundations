#include <iostream>
#include <string>
#include <vector>
using namespace std;
int stringCompressiom(vector<char>& chars){
      int write=0,read=0;
      while(read<chars.size()){
            char currentChar = chars[read];
            int count=0;
            
            while(read<chars.size() && chars[read]==currentChar){
                read++;
                count++;
            }
            chars[write]=currentChar;
            write++;

            if(count>1){
                string countStr=to_string(count);
                for(char c : countStr) chars[write++]=c;
            }
      }
      return write;
}
int main(){
      vector<char> s={'a','a','b','b','c','c','c'};
      cout << stringCompressiom(s);
}