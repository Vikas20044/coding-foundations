#include <iostream>
#include <string>
using namespace std;
string longestGoodInteger(string num){
      char maxx = '/';

      for(int i=0; i<num.size()-2; i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                maxx = max(num[i],maxx);

            }
      }
      if(maxx=='/') return "";
      return string(3,maxx);
}
int main(){
      string num="2300019";
      cout << longestGoodInteger(num);
}