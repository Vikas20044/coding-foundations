#include <iostream>
#include <vector>
using namespace std;
int peakIndex(vector<int> arr){
      int l=0,r=arr.size()-1;
      while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1]) return mid;

            if(arr[mid]<arr[mid+1]) l=mid+1;

            else r=mid-1;
      }
      return l;
}
int main(){
      vector<int> n={1, 100, 99, 98, 97, 96, 95, 94, 93, 92};
      cout << peakIndex(n);
}