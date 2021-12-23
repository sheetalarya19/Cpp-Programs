// level order traversal Solution
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
void levelorder(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    if(root == NULL)
    {
        return;
    }
    q.push(root);
    while(!q.empty())
    {
        Node *n = q.front();
        cout<<n->data<<" ";
        q.pop();
        if(n->left)
        {
            q.push(n->left);
        }
        if(n->right)
        {
            q.push(n->right);
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
    //root->right->left = new Node(6);
   // root->right->right = new Node(7);
   
    levelorder(root);
}