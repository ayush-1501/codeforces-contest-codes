#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
  
Node* rearrangeEvenOdd(Node *head)
{
    
       Node *odd=head;
       Node *even=head->next;
       Node *ans=even;
       
       while(even and even->next)
       {
           odd->next=odd->next->next;
           even->next=even->next->next;
           // odd->next=odd->next->next;
           
           even=even->next;
           odd=odd->next;
       }
       even->next=ans;
       return odd;
 }

void printlist(Node * node)
{
    while (node != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
  
    cout << "Given LL\n";
    printlist(head);
  
    head = rearrangeEvenOdd(head);
  
    cout << "Modified LL\n";
    printlist(head);
  
    return 0;
}