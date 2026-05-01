#include <iostream>
#include <vector>
using namespace std;
vector<int> st(20);
int top=-1,capacity=4;
void push(int x){
      if(top==capacity-1){
            cout << "Stack is overflow !" << endl;
            return;
      }
      top++;
      st[top]=x;
      cout << "Element " << x << " is pushed" << endl;

}
void pop(){
      if(top==-1){
            cout << "Stack is underflow !" << endl;
            return;
      }
      cout << "Element" << st[top--] << " is poped" << endl;


}
void display(){
      if(top==-1){
            cout << "Stack is empty !";
      }
      for(int i=0; i<=top; i++) cout << st[i] << " ";
      cout << endl;
}
int main(){
     
      push(10);
      push(20);
      display();
      push(40);
      push(50);
      display();
      push(60);
      pop();
      display();
      pop();
      pop();
      pop();
      display();
      pop();


}