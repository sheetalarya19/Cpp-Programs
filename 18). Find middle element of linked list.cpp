// Find the middle Element of a linked list. Solution

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
int length(Node *head)
{
    Node *temp = head;
    int l=1;
    while(temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}
int findMid(Node *head)
{
    Node *temp = head;
    int len = length(head),count = 1;
    int n = len/2;
    while(temp != NULL)
    {
        if(n == count)
        {
            return temp->data;
        }
        count++;
        temp = temp->next;
    }
    return 0;
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
  insertattail(head , 5);
  insertattail(head , 6);
  insertattail(head , 7);
  insertattail(head , 8);
  insertattail(head , 9);
  insertattail(head , 10);
 
  display(head);
  //removeDup(head);
  cout<<findMid(head)<<"\n";
   //display(head);
  

}