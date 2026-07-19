#include <iostream>
using namespace std;
struct TreeNode
{
      TreeNode* left;
      TreeNode* right;
      int val;
      TreeNode(int val){
            this->val = val;
            left = nullptr;
            right = nullptr;
      }
};
int maxDepth(TreeNode* root){
      if(!root) return 0;

      int left = 1+maxDepth(root->left);
      int right = 1+maxDepth(root->right);

      return max(left,right);
}


int main(){
      TreeNode* root = new TreeNode(10);
      TreeNode* n2 = new TreeNode(20);
      TreeNode* n3 = new TreeNode(30);
      TreeNode* n4 = new TreeNode(40);
      TreeNode* n5 = new TreeNode(50);
      TreeNode* n6 = new TreeNode(60);

      root->left = n2;
      root->right = n3;
      n2->left = n4;
      n2->right = n5;
      n4->left = n6;
      cout << "Max Depth : " << maxDepth(root);
      
}
