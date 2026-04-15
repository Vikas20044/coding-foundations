#include <iostream>
#include <string>
using namespace std;
string addBinary(string a,string b){
      int as=a.size(),bs=b.size();
      int r=as-1;
      string result="";
      while(r>=0){
            if(a[r]==1 && b[r]==1){
                  result.insert(result.begin(),'1');
            }
      }
}
int main(){
      string a="11",b="1";
      cout << addBinary(a,b);
}
