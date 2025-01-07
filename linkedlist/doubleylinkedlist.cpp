#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int d){
        this->data =d;
        this->prev =NULL;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    cout <<endl;


}
int getLength(Node* head){
    int len = 0;
    Node* temp =head;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    
    return len;

}
void insertathead(Node* &head, int d){
    Node* temp =new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAttail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    //insert at start
    if (position==1)
    {
        insertathead(head,d);
    }
    Node* temp = head;
    int cnt =1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last postion 
    if (temp->next==NULL)

    {
        insertAttail(tail,d);
        return ;
    }
    // creating a node for d
    Node *nodetoinsert= new Node(d);

    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev= temp;
   
}

void deleteNode(int position,Node * &head){
    if(position==1){
        Node* temp= head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;

    }
    else{
        //deleting any middle 
        Node* curr= head;
        Node *prev=NULL;
        int cnt =1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
             
        }
        prev->next=curr->next;
        curr ->next = NULL;
        delete curr;
        
    }
}
int main(){
    Node* node1=new Node(10);
    Node* head =node1;
    Node* tail= node1;
    print(head);
    //cout<<getLength(head)<<endl;
    insertathead(head,11);
    print(head);
    insertAttail(tail,12);
    print(head);

    insertAtPosition(tail,head,2,56);
    print(head);

    return 0;
}