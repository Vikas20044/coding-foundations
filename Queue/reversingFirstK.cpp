#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<int> reverseQueueK(queue<int>& q,int n){
   
      stack<int> st;
      for(int i=0; i<n; i++){
            st.push(q.front());
            q.pop();
      }
     
      
      while(!(st.empty())){
            q.push(st.top());
            st.pop();
      }
      for(int i=0; i<q.size()-n; i++){
            q.push(q.front());
            q.pop();
      }
      return q;
}
int main(){
      queue<int> q;
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);

      queue<int> q1=reverseQueueK(q,5);
      while(!(q1.empty())){
            cout << q1.front() << " ";
            q1.pop();
      }

}