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
void leftutil(Node *root , int level , vector<int> &res)
    {
        if(!root)
        {
            return;
        }
        if(res.size()<level)
        {
            res.push_back(root->data);
        }
        leftutil(root->left , level+1 , res);
        leftutil(root->right , level+1 , res);
        
    }
   
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
        vector<int> res;
        leftutil(root , 1 , res);
        return res;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->left = new Node(15);
   root->right->right = new Node(12);
   root->right->right->left = new Node(14);
    vector<int> ans;
    cout<<"\n";
    ans = leftView(root);
    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i]<<" ";
	}
}

