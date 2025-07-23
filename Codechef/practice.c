#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;

};

struct node* newnode(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node* creation(struct node* root){
    int x;
    printf("Enter data for root(-1 for no node): ");
    scanf("%d",&x);

    root=newnode(x);
    if(x==-1){
        return NULL;
    }

    printf("Enter data for left child of node %d:\n",x);
    root->left=creation(root->left);
    printf("Enter data for right child of root %d:\n",x);
    root->right=creation(root->right);
    return root;
}

void inOrder(struct node* root){
    if(root==NULL) return;
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
    return;
}
void preOrder(struct node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
    return;
}
void postOrder(struct node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
    return;
}

int main(){
    struct node* root=NULL;
    root=creation(root);

    printf("Inorder: ");
    inOrder(root);
    printf("\npreorder: ");
    preOrder(root);
    printf("\nPostorder: ");
    postOrder(root);



    return 0;
}