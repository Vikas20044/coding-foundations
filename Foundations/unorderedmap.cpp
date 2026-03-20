#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
      unordered_map<int,int> um={{1,4},{2,9}};

      

      for(auto i: um){  //printing all
            cout << i.first << " : " << i.second << endl;
      }

      um.insert({3,5}); //inserting

      cout << um[3]; // accessing element O(1)

      um[2]++; // updating value

      if(um.count(2)){ // finding key O(1)
            cout << "2 key found";
      }

      um.erase(1); //deleting key O(1)

      cout <<  endl;

      for(auto i: um){ 
            cout << i.first << " : " << i.second << endl;

      }





}