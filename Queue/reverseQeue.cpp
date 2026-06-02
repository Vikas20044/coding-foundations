#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue<int>& q){
      stack<int> st;
      while(!(q.empty())){
            st.push(q.front());
            q.pop();
      }
      while(!(st.empty())){
            q.push(st.top());
            st.pop();
      }
}
int main(){
      queue<int> q;
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      cout << q.front() << " " << q.back() << endl;
      reverseQueue(q);
      cout << q.front() << " " << q.back();
}