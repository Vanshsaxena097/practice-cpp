#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this ->data=data;
        this ->next=NULL;

    }
};

void insertAtHead(node* &head,int d){
    // new node create
    node* temp= new node(d);
    temp->next=head;
    head=temp;

}
void print(node* &head){
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout <<endl;
    
}
int main(){
    // created a new node
    node* Node1 = new node(10);
   // cout<<Node1 ->data<<endl;
   // cout<<Node1 ->next<<endl;

    //head pointed to node1
    node*head=Node1;
    print(head);
    insertAtHead(head,12);
    print(head);
}