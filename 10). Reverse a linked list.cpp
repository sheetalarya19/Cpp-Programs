// Write a Program to reverse the Linked List. (Both Iterative and recursive) Solution
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAttail(Node* &head , int val)
{
    Node *n = new Node(val);
    if(head == NULL)
    { 
        head = n;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
       temp = temp->next;
    }
    temp->next = n;
}
void reverse(Node* &head)
{
    Node *curr , *nextptr , *prev;
    curr = head , nextptr = prev = NULL;
    while(curr != NULL)
    {
        nextptr = curr->next;
        
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    head = prev;
}
void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(1);
    insertAttail(head , 2);
    insertAttail(head , 3);
    insertAttail(head , 4);
    insertAttail(head , 5);
    insertAttail(head , 6);
    insertAttail(head , 7);
    display(head);
    reverse(head);
    cout<<"\n";
    display(head);
}