#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
	Node *left , *right;
	int data;
	Node(int val)
	{
		data = val;
		left = right = NULL;
	}
};
void preorder(Node *root)
{
	if(!root)
	{
		return;
	}
	std::stack<Node *> st ;
	st.push(root);
	while(!st.empty())
	{
	    Node *curr = st.top();
	    st.pop();
	    cout<<curr->data<<" ";
	    if(curr->right)
	    {
	        st.push(curr->right);
	    }
	    if(curr->left)
	    {
	        st.push(curr->left);
	    }
	}
	
	//cout<<root->data<<" ";
	//preorder(root->left);
//preorder(root->right);
}
int main()
{
	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    preorder(root);
}