#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node* insert(struct node* root,int key){
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
    else if(key<root->data){
        return search(root->left,key);
    }
    else return search(root->right,key);
}


int main(){
    struct node* root=NULL;
    int n,key;
    scanf("%d %d",&n,&key);
    int y;
    scanf("%d",&y);
    root=insert(root,y);
    while(n-- && n>0){
        int x;
        scanf("%d",&x);
        insert(root,x);
    }
    if(search(root,key)==NULL) printf("NO\n");
    else printf("YES\n");
    
    return 0;
}