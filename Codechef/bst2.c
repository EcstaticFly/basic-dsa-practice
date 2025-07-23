#include<stdio.h>
//search
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int d){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
bool valid(struct node* root,int min,int max){
    if(root==NULL) return true;
    else if(root->data>=max || root->data<=min) return false;
    return valid(root->left,min,root->data)&& valid(root->right,root->data,max);
}
struct node* insert(struct node* root, int key){
    // struct node* Node=newNode(key);
    if(root==NULL){
        
        return newNode(key);
    }
    if(key<root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    return root;
}
struct node* search(struct node* root,int key){
    if(root==NULL || root->data==key){
        return root;
    }
    // right part..
    else if(key>root->data){
        return search(root->right,key);
    }
    return search(root->left,key);
}
struct node* delete(struct node* root,int key){
    if(!root) return NULL;
    if(root->data<key) root->right=delete(root->right,key);
    else if(root->data>key) root->left=delete(root->left,key);
    else{
        if(!root->right && !root->left) return NULL;
        else if(!root->right) return root->left;
        else if(!root->left) return root->right;
        else{
            struct node* temp=root->right;
            while(temp->left) temp=temp->left;
            temp->left=root->left;
            return root->right;
        }
    }
    return root;
}
int main(){
    struct node* root=NULL;
    int n,key;
    scanf("%d %d",& n,&key);
    int y;
    scanf("%d",& y);
    root=insert(root,y);
    while(n-- && n>0){
        int x;
        scanf("%d",&x);
        insert(root,x);
    }
    int m=INT_MIN,M=INT_MAX;
   if(valid(root,m,M)==true) {
    prinf("VALID BST");
    if( search(root,key)==NULL){
        printf("NO\n");

    }
    else{
        printf("YES\n");
    }
    }
   else printf("INVALID BST");


    return 0;
}