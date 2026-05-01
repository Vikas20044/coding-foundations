#include <iostream>
#include <stack>
using namespace std;
int main(){
      stack<int> st;
      st.push(10);
      st.push(20); // Inserting elements
      cout << st.size() << endl;  //checking stack size
      cout << st.top() << endl; // top element

      cout << st.empty() << endl; // check if stack is empty

      stack<int> temp=st; // traversing through the stack
      while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
      }
}