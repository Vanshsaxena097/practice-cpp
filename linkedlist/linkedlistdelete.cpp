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

    // destructor
    ~node(){
        int value =this->data;
        //memory free code
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<< " memory is free for node with data"<<value<<endl;
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
void deleteNode(int position,node* &head){
    //deleting first node
    if (position==1)
    {
        node* temp=head;
        head=head->next;

        temp->next=NULL;

        //memory free of start node
        delete temp;

    }
    else
    {
        //delete any middle node or last node 
        node* curr =head;
        node* prev =NULL;
        int cnt=1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        
    }
    
    

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
    deleteNode(2,head);
    print(head);
}