#include <iostream>
#include <vector>
using namespace std;
void plusOne(vector<int>& d) {
      vector<int> result;
      int n=d.size()-1;       
      while(true){
            
            if((d[n]+1)<10){
                d[n]=d[n]+1;
                break;
            } 
            d[n]=0;
          
            n--;
            if(n<0){
                d.insert(d.begin(),1);
                break;
            }


      }
      
}
int main(){
      vector<int> n={4,3,2,1};
      plusOne(n);

      for(int i: n){
            cout << i << " ";
      }
}