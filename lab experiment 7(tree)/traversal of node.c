#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int main(){
    struct node*a=createNode(9);
    struct node*a1=createNode(8);
    struct node*a2=createNode(7);
    struct node*a3=createNode(6);
    struct node*a4=createNode(5);
    a->left=a1;
    a->right=a2;
    a1->left=a3;
    a1->right=a4;
    printf("preorder traversal:\n");
    preOrder( a );
    printf("\n");
    printf("postorder traversal:\n");
    postOrder( a );
    printf("\n");
    printf("inorder traversal:\n");
    inOrder( a );
    return 0;
}
