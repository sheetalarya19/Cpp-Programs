// Remove Duplicates in a sorted Linked List. Solution
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void removeDup(Node* &head)
{
    Node *temp = head;
    while(temp != NULL&& temp->next)
    {
        if(temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
}
void insertattail(Node* &head , int val)
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
void display(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
}
int main()
{
  Node *head = new Node(1);
  insertattail(head , 2);
  insertattail(head , 3);
  insertattail(head , 4);
  insertattail(head , 4);
  insertattail(head , 4);
  insertattail(head , 4);
  insertattail(head , 5);
  insertattail(head , 6);
  insertattail(head , 7);
  insertattail(head , 8);
  display(head);
  removeDup(head);
  cout<<"\n";
   display(head);
  

}