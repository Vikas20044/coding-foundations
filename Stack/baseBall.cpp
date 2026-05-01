#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
int BaseBall(vector<string> o){
      stack<int> s;
      for(int i=0; i<o.size(); i++){
            
            if(o[i] =="C") s.pop();

            else if(o[i]=="D"){     
                  s.push(s.top()*2);
            }
            else if(o[i]=="+"){
                  int n1=s.top();
                  s.pop();
                  int n2=s.top();
                  s.push(n1);
       
                  s.push(n1+n2);
                
            }
            else s.push(stoi(o[i]));
            cout << i+1 << " : ";
            stack<int> s1=s;
            while(!s1.empty()){
                  cout << s1.top() << " ";
                  s1.pop();
            
            }
            cout << endl;
            
            
      }
      

      
      int res=0;
      while(!s.empty()){
            res+=s.top();
            s.pop();
      }
      return res;
}
int main(){
      vector<string> o={"5","-2","4","C","D","9","+","+"};
     cout << BaseBall(o);
}