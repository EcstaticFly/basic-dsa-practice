#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    ~node(){ //Own destructor not necessary
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for node with data "<<value<<endl;
    }
};

void print(node* &tail){
    if(tail==NULL){
        cout<<"List empty"<<endl;
        return;
    }
    node*temp =new node;
    temp=tail->next;
    while(temp->next!=tail->next){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}
void insertAtHead(node* &tail,int d){
    node* temp=new node;
    temp->data=d;
    temp->next=tail->next;
    tail->next=temp;
}
void insertAtEnd(node* &tail,int d){
    node* temp=new node;
    temp->data=d;
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
}
void insertAfter(node* &tail,int d,int target){
    node*t=new node;
    t=tail->next;
    while(t->data!=target){
        t=t->next;
    }
    if(t->next==tail->next){
        insertAtEnd(tail,d);
        return;
    }
    node* temp=new node;
    temp->data=d;
    temp->next=t->next;
    t->next=temp;
    
}
void insertBefore(node* &tail,int d,int target){
    if(target==tail->next->data){
        insertAtHead(tail,d);
        return;
    }
    node*t =new node;
    t=tail->next;
    while(t->next->data!=target){
        t=t->next;
    }
    node* temp=new node;
    temp->data=d;
    temp->next=t->next;
    t->next=temp;
}
void del(node* &tail,int target){
    if(tail==tail->next){
        node*temp2=new node;
        temp2=tail;
        tail->next=NULL;
        tail=NULL;
        delete temp2;
        return;
    }
    if(target==tail->next->data){
        node*temp2=new node;
        temp2=tail->next;
        tail->next=tail->next->next;
        temp2->next=NULL;
        delete temp2;
        return;
    }
    node* temp=new node;
    temp=tail->next;
    while(temp->next->data!=target){
        temp=temp->next;
    }
    if(temp->next->next==tail->next){
        node*temp2=new node;
        temp2=tail;
        temp->next=tail->next;
        tail=temp;
        temp2->next=NULL;
        delete temp2;
        return;
    }
    node*temp2=new node;
    temp2=temp->next;
    temp->next=temp->next->next;
    temp2->next=NULL;
    delete temp2;
}
int main(){
    node* tail=new node;
    node*n1=new node;
    n1->data=2;
    tail=n1;
    n1->next=tail;
    print(tail);
    insertAtHead(tail,1);
    insertAtHead(tail,0);
    print(tail);
    insertAtEnd(tail,3);
    insertAtEnd(tail,4);
    print(tail);
    insertBefore(tail,100,3);
    insertBefore(tail,101,0);
    insertBefore(tail,102,4);
    print(tail);
    cout<<tail->next->data<<" "<<tail->data<<endl;
    insertAfter(tail,999,101);
    insertAfter(tail,888,4);
    insertAfter(tail,777,2);
    print(tail);
    cout<<tail->next->data<<" "<<tail->data<<endl;
    del(tail,2);
    del(tail,101);
    del(tail,888);
    del(tail,999);
    del(tail,777);
    insertAfter(tail,34,3);
    insertBefore(tail,12,1);
    insertBefore(tail,100,0);
    insertBefore(tail,89,4);
    insertAfter(tail,14,4);
    insertAfter(tail,31,100);
    print(tail);
    cout<<tail->next->data<<" "<<tail->data<<endl;



}