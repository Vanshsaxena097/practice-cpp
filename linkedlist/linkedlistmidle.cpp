#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;

    }

};
void insertAtTail(node* &tail,int d){
    node* temp= new node(d);
    tail->next=temp;
    tail=temp;

}
void insertAtMiddle(node* &head ,node *&tail,int d){
    node* temp=new node(d);
    head->next=temp;
    temp->next=tail;

}
void print(node* &head){
    node *temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    };
    cout<<endl;
    
}

int main(){
    node* Node1=new node(10);
    node*head=Node1;
    node*tail=Node1;
    print(head);
    insertAtTail(tail,12);
    insertAtMiddle(head,tail,13);
    print(head);
    insertAtMiddle(head,tail,14);

    print(head);


    
}