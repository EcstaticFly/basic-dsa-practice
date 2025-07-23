#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;
//check if a LL is circular or not.
//Note: 1 2 3 4 6 7 8 4. is not circular..it has a loop b/w two 4's

class Node{
    public:
    int data;
    Node* next;      
};
bool check(Node* head){
    if(head==NULL) return true; //Null list=Circular
    Node* t=head;
    while(t!=NULL){
        if(t->data==INT_MAX) return false;
        if(t->next==head) return true;
        t->data=INT_MAX;
        t=t->next;
    }
    return false;
}

int main(){
     Node* s1=new Node;
	Node* s2=new Node;
	Node* s3=new Node;
	s1->data=2;
	s1->next=s2;
	Node* head=new Node;
	Node* s4=new Node;
	head=s1;
	s2->data=5;
	s2->next=s3;
	s3->data=7;
	s3->next=s4;
	s4->data=11;
	s4->next=s1;
    if(check(head)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}