#include<iostream>
using namespace std;

class node{
    public:
    int integer;
    node* next;

    //CONSTRUCTOR
    node (int d){
        integer = d;
        next = NULL;
    }
};

void insertNodeHead(node*&head , int data){
    node*n = new node(data);
    n->next=head;
    head=n;
}

void print(node*head){
    node*temp = head;
    while (temp != NULL)
    {
       cout << temp->integer;
       temp = temp->next;   
    }
    
  
}

int main(){
    node*head=NULL;
    insertNodeHead(head,5);
    insertNodeHead(head,8);
    print(head);
    return 0;
}