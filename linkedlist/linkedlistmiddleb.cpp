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
void insertAtTail(node* &tail,int d){
    node* temp= new node(d);
    tail->next=temp;
    tail=temp;

}
void insertAtPostion(int position,int d, node* & head){
    node* temp=head;
    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    // creating a node for d
    node* nodeToInsert=new node(d);
    nodeToInsert->next=temp->next;
    temp->next =nodeToInsert;


     

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
    node *tail=Node1;
    print(head);
    insertAtTail(tail,12);
    insertAtPostion(2 ,6,head);
    print(head);
}