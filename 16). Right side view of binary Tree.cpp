
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

void rightutil(Node *root , int level , vector<int> &res)
{
    if(!root)
    {
        return;
    }
    if(res.size()<level)
    {
        res.push_back(root->data);
    }
    rightutil(root->right , level+1 , res);
    rightutil(root->left , level+1 , res);
}
vector<int> rightSideView(Node* root) {
    vector<int> res;
    rightutil(root , 1 , res);
    return res;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(60);
    //root->right->left = new Node(6);
   // root->right->right = new Node(7);

    vector<int> ans;
    cout<<"\n";
    ans = rightSideView(root);
    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i]<<" ";
	}
}






