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

int length(node*head){
    int len=0;
    while(head!=NULL){
        head = head->next;
        len++;
    }
    return len;
}

void insertNodeHead(node*&head , int data){
    node*n = new node(data);
    n->next=head;
    head=n;
}


void insertNodeTail(node*&head,int data){
    if(head == NULL){
        head = new node(data);
    }
    node*tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}


void insertNodeMiddle(node*&head,int data, int p){
    if(head==NULL || p==0){
        insertNodeHead(head,data);
    }

    else if(p>length(head)){
         insertNodeTail(head,data);
    }

    else{
            node*temp = head;
            int i=0;

            //reaching node after whih we ned to insert node
            while(i<p-1){
             temp = temp->next;
             i++;
             }
             
             //creating new node
             node*n = new node(data);
             n->next = temp->next;
             temp->next = n;
    }
}



void print(node*head){
    node*temp = head;
    while (temp != NULL)
    {
       cout << temp->integer << " --> ";
       temp = temp->next;   
    }
    
  
}

int main(){
    node*head = NULL;
    insertNodeMiddle(head,5,0);
    insertNodeMiddle(head,6,0);
    insertNodeMiddle(head,7,0);
    insertNodeTail(head,7);
    insertNodeMiddle(head,8,0);
    print(head);
    return 0;
}