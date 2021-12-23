// Height of a tree Solution 
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left , *right;
    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
int maxDepth(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        if(l>r)
        {
            return (l+1);
        }
        else
        {
            return (r+1);
        }
    }
   
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
   root->left->right = new Node(5);
   // root->right->left = new Node(6);
  //  root->right->right = new Node(7);
   // preorder(root); cout<<"\n";
    cout<<maxDepth(root);
    
}