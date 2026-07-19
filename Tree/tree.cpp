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
void preorder(TreeNode* root){
      if(root==nullptr) return;

      cout << root->val << " ";
      preorder(root->left);
      preorder(root->right);

}
void inorder(TreeNode* root){
      if(root==nullptr) return;

      
      inorder(root->left);
      cout << root->val << " ";
      inorder(root->right);

}
void postorder(TreeNode* root){
      if(root==nullptr) return;

      
      postorder(root->left);
      postorder(root->right);
      cout << root->val << " ";

}

int main(){
      TreeNode* root = new TreeNode(10);
      TreeNode* n2 = new TreeNode(20);
      TreeNode* n3 = new TreeNode(30);
      TreeNode* n4 = new TreeNode(40);
      TreeNode* n5 = new TreeNode(50);

      root->left = n2;
      root->right = n3;
      n2->left = n4;
      n2->right = n5;
      cout << "Preorder : ";
      preorder(root);
      cout << "\nInorder : ";
      inorder(root);
      cout << "\nPostorder : ";
      postorder(root);
}
