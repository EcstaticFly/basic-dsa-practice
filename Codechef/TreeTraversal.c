#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int d){
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node* creation(struct node* root){
    int x;
    printf("Enter data for root: ");
    scanf("%d",&x);
    
    root=newNode(x);
    if(x==-1){
        return NULL;
    }
    printf("Enter data for left of root %d :\n ",x);
    root->left=creation(root->left);
    printf("Enter data for right of root %d :\n ",x);
    root->right=creation(root->right);
    return root;
}
// void levelOrderTraversal(struct node* root){
//     if(root==NULL){
//         return ;
//     }
//     printf("z%d ",root->data);
//     printf("z%d ",root->left->data);
//     printf("z%d ",root->right->data);
//     levelOrderTraversal(root->left);
    
//     levelOrderTraversal(root->right);
//     return;
// }
void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
    return;
}
void preOrder(struct node* root){
    if(root==NULL){
        return ;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);

    return ; 
}
void postOrder(struct node* root){
    if(root== NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data); 
    return;
}
int main(){
    struct node* root=NULL;
    root=creation(root);
    // levelOrderTraversal(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);

}