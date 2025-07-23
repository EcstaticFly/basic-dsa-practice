#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#define mod 1000000007
using namespace std;

//Reverse LL(all approaches):
//T.C: O(n);
//S.C: O(1);

class student{
	public:
	int data;
	student* next;
};

void printRev(student* head){ //printing a LL in reverse
  if (head->next == NULL) {
      cout<<head->data<<" ";
    return;
  }
    printRev(head->next);
    cout<<head->data<<" ";
    return;
}

void rev(student* &head){ //Reverseing a linked list in place
	//Loop Approach:
	student* prev=new student;
	prev=NULL;
	student* curr=new student;
	curr=head;
	while(curr!=NULL){
		student* forw=new student;
		forw=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forw;
	}
	head=prev;
}

void Rever(student* &head,student* curr,student* prev){
	if(curr==NULL){
		head=prev;
		return;
	}
	student* forw=new student;
	forw=curr->next;
	Rever(head,forw,curr);
	curr->next=prev;

}
student* RevRec(student* &head){ //Reverseing a linked list in place
	//Recursive Approach 1:
	student* prev=NULL;
	student* curr=head;
	Rever(head,curr,prev);
	return head;
}

student* rev1(student*head){
	//Recursive Approach 2: (best)
	if(head==NULL || head->next==NULL){
		return head;
	}
	student* chotaHead=rev1(head->next);
	head->next->next=head;
	head->next=NULL;
	return chotaHead;
}
void print(student* &head){
    student* temp =new student;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}
int main() {
    student* s1=new student;
	student* s2=new student;
	student* s3=new student;
	s1->data=2;
	s1->next=s2;
	student* head=new student;
	student* s4=new student;
	head=s1;
	s2->data=5;
	s2->next=s3;
	s3->data=7;
	s3->next=s4;
	s4->data=11;
	s4->next=NULL;
	// printRev(head);

	cout<<"Original: "<<" ";
	print(head);
	
	// cout<<"Reverse(approach 1): "<<" ";
	// head=RevRec(head);
	// print(head);
	cout<<endl;
	head=rev1(head);
	cout<<"Reverse(approach 2): "<<" ";
	print(head);

}