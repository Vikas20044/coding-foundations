#include <iostream>
#include <queue>
using namespace std;

int main(){
      queue<int> qu;
      qu.push(10);
      qu.push(20);
      qu.push(30);

      cout << qu.front() << endl;

      cout << endl;

      cout << qu.back();

      cout << endl;

      qu.pop();

      cout << endl;

      cout << qu.front() << endl;

      cout << qu.empty() << endl;

      cout << qu.size() << endl;


}