#include <iostream>
using namespace std;

struct TreeNode{
      int val;
      TreeNode* left;
      TreeNode* right;
      TreeNode(int x){
            val = x;
            left = nullptr;
            right = nullptr;
      }
};

void inorderTraversal(TreeNode* root){
      if(root!=nullptr){
            cout << root->val << " ";
            inorderTraversal(root->left);
            
            inorderTraversal(root->right);
      }
}
int main(){
      TreeNode* root = new TreeNode(10);

      root->left = new TreeNode(20);
      root->right = new TreeNode(30);

      root->left->left = new TreeNode(40);
      root->left->right = new TreeNode(50);

      cout << root->left->left->val;

      inorderTraversal(root);
}
