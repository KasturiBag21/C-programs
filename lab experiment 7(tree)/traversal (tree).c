#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* right;
	struct node* left;
};
struct node* createNode(int data)
{
	struct node* n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void preOrder(struct node* root)
{
	if(root!=NULL)
	{
		printf("%d", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
void postOrder(struct node* root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d", root->data);
	}
}
void inOrder(struct node* root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		printf("%d", root->data);
		inOrder(root->right);
	}
}

struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
struct node *new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }

}
int main()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=4;
    p->right=NULL;
    p->left=NULL;

    struct node *p1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->data=1;
    p1->right=NULL;
    p1->left=NULL;

    struct node *p2;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->data=6;
    p2->left=NULL;
    p2->right= NULL;

    struct node *p3;
    p3=(struct node*)malloc(sizeof(struct node));
    p3->data=5;
    p3->left=NULL;
    p3->right= NULL;

    struct node *p4;
    p4=(struct node*)malloc(sizeof(struct node));
    p4->data=2;
    p4->left=NULL;
    p4->right= NULL;

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    printf("PREORDER TRAVERSAL:\n");
	preOrder( p );
	printf("\n");
	printf("POSTORDER TRAVERSAL:\n");
	postOrder( p );
	printf("\n");
	printf("INORDER TRAVERSAL:\n");
	inOrder( p );
    printf("\n");
    return 0;
}
