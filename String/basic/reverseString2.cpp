#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;

void reverseString(string& s,int k){
      int left = 0;
      int lastIndex = s.size()-1;

      while(left<s.size()){
            int right = min(left+k-1,lastIndex);
            cout << left << " " << right << endl;

            
            reverse(s.begin()+left,s.begin()+right+1);

            left = left+k;
      }

      


}
int main(){
      string s = "abcdefgh";
      int k = 3;
      reverseString(s,k);
      cout << "Reverse of a string : " << s;
}