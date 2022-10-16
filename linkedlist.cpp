#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};
void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = new Node(10);
    // Node *temp = new Node(20);
    // Node * temp2 = new Node(30);
    // head -> next = temp;
    // temp -> next = temp2;
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    printlist(head);
    return 0;
    
    return 0;
}
