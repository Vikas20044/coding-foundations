#include <iostream>
#include <string>
#include <stack>
using namespace std;
string reverseWords(string& s){
      stack<string> words;
      string word = "";
      for(int i = 0; i<s.size(); i++){
            if(s[i]==' ' || i==s.size()-1){
                  if(i==s.size()-1) word += s[i];
                  words.push(word);
                  word = "";
            } else{
                  word += s[i];
            }
      
      }
      string result = "";
      while(!words.empty()){
            result += words.top();
            
            words.pop();
            if(!words.empty()) result += " ";
            
      }

      return result;
}
int main(){
      string s = "i like this program very much";

      cout << "Reverse of a string : " << reverseWords(s);
}