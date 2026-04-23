#include <iostream>
#include <vector>
using namespace std;
bool threeConsecutiveOdds(vector<int> arr){
      int count=0;
      for(int i=0; i<arr.size(); i++){
            if(arr[i]%2==1){
                  count++;
                  if(count==3) return true;
            }
            else count=0;
      }
      return false;
}
int main(){
      vector<int> a={1,2,3,4,3,4,5,7,22,12};
      cout << threeConsecutiveOdds(a);
      
}