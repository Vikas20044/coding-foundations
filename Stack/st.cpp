#include <iostream>
#include <stack>
using namespace std;
int main(){
      stack<int> st;
      st.push(10);
      st.push(20);
      st.push(30);
      st.push(40);
      cout << st.top(); // top element

      cout << st.empty();

      st.pop();

      cout << st.top();

      cout << st.size();

      stack<int> s1;

      cout << endl;
      // traversing stack
      while(!st.empty()){
            
            cout << st.top() << endl;
            s1.push(st.top());
            st.pop();

      }

      cout << endl;
     
      while(!s1.empty()){
            
          
            st.push(s1.top());
            s1.pop();

      }

      cout << st.top();
}