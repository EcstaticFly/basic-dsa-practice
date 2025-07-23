#include<stdio.h>
#include<limits.h>
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
    if(key<root->data){
        return search(root->left,key);
    }
    else if(key>root->data){
        return search(root->right,key);
    }

}

int main(){
    struct node* root=NULL;
    int size, key;
    scanf("%d %d",&size,&key);
    int y;
    scanf("%d",&y);
    root=insert(root,y);
    while(size-- && size>0){
        int x;
        scanf("%d",&x);
        insert(root,x);
    }
    if(search(root,key)==NULL) printf("NO");
    else printf("YES");
    
    return 0;
}