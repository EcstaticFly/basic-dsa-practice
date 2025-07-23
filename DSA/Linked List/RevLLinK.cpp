#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#define mod 1000000007
using namespace std;

//Reverse LL in groups of (k), if in last elements<k..then leave it be.:
//eg-> 2 3 4 5 6 7, k=4. o/p=5 4 3 2 6 7
//T.C: O(n);
//S.C: O(n);

Node* kReverse(Node* head, int k) {
    // Write your code here.
   if(head==NULL){
       return NULL;
    }
    int l=0;
    Node* t=head;
    while(t!=NULL){
        l++;
        t=t->next;
    }
   if(l<k) return head;
   Node* prev=NULL;
   Node* curr=head;
   Node* next=NULL;
   int c=0;
         while(curr!=NULL && c<k){
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
     c++;
   }
       head->next=kReverse(next, k);
   
   return prev;
}