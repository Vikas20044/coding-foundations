#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotateImage(vector<vector<int>>& matrix){
      for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<matrix.size(); j++){
                  swap(matrix[i][j],matrix[j][i]);
            }
      }

      for(int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(),matrix[i].end());
      }

}
int main(){
      vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};

      rotateImage(matrix);

      for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                  cout << matrix[i][j] << " ";
            }
            cout << endl;
      }
}