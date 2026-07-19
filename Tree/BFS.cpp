#include <iostream>
#include <queue>
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
void bfs(TreeNode* root){
      if(root==nullptr) return;
      queue<TreeNode*> q;
      q.push(root);
      while(!q.empty()){
            TreeNode* curr = q.front();
            
            cout << curr->val << " ";
            q.pop();
            if(curr->left) q.push(curr->left);

            if(curr->right) q.push(curr->right);


      }
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
      bfs(root);
      
}
