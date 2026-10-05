#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
      priority_queue<int> pq;

      pq.push(10);
      pq.push(20);
      pq.push(15);
      pq.push(7);

      cout << pq.top();

      pq.pop();
      cout << endl;

      cout << pq.top();

      priority_queue<int , vector<int> , greater<int>> minHeap;

      minHeap.push(10);
      minHeap.push(40);
      minHeap.push(20);

      cout << minHeap.top();

      auto mpq = minHeap;

      mpq.pop();
      cout << endl;
      cout << mpq.top();

}