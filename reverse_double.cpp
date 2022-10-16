#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node (int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
Node *reverse(Node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node*temp = head;
    Node *curr = NULL;
    while(temp != NULL){
        curr = temp->prev;
        temp->prev = temp->next;
        temp->next = curr;
        temp = temp->prev;
    }
    return curr->prev;
}
int main()
{
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp;
    temp -> next = temp2;
    temp -> prev = head;
    temp2->prev = temp;
    head = reverse(head);
    printlist(head);
    return 0;
}
