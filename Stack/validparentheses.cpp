#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool validParentheses(string s){
      stack<char> st;
      for(int i=0; i<s.size(); i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='[') st.push(s[i]);
            

            else{
                  if(st.empty()) return false;
                  if(s[i]=='}'){
                        if(st.top()!='{') return false;
                        st.pop();
                  }
                  if(s[i]==')'){
                        if(st.top()!='(') return false;
                        st.pop();
                  }
                  if(s[i]==']'){
                       if(st.top()!='[') return false;
                       st.pop(); 
                  }
            }
            stack<char> st1=st;
            cout << i << " " << s[i] << " Stack : ";
            while(!st1.empty())
            {
                  cout << st1.top() << " ";
                  st1.pop();
            } 
            cout << endl;
      }
      if(st.empty()) return true;
      return false;
}
int main(){
      string s="{[()]}";
      if(validParentheses(s)) cout << "True";

      else cout<< "False";
}