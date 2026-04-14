#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
      string s="Hello world "; // Initializing String
      cout << s << endl;

      cout << s[0] << endl; // Accessing character

      cout << s.size() << endl; // String size 

      s.push_back('H'); // Adding character

      cout << s << endl;

      s.insert(s.begin()+5,'to'); //Inseerting substring

      cout << s << endl;

      s.erase(s.begin()+3,s.begin()+5); //deletingpart of string

      cout << s;

      reverse(s.begin(),s.end()); // reversing a string

      cout << s;
}