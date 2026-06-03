#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void revereStack(stack<int>& st){
      stack<int> s;
      while(!(st.empty())){
            s.push(st.top());
            st.pop();
      }
      st=s;
}
int main(){
      vector<int> nums={1,2,3,4};
      stack<int> st;
      for(int x: nums) st.push(x);
      cout << st.top() << endl;
      revereStack(st);
      cout << st.top() << endl;
      while(!(st.empty())){
            cout << st.top();
            st.pop();
      }
      

}