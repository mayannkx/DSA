#include<stdio.h>
#include<stdlib.h>
struct node{
int d;
struct node* left;
struct node* right;
};
struct node* create(int d)
{
struct node* new=(struct node*)malloc(sizeof(struct node));
new->d=d;
new->left=NULL;
new->right=NULL;
return new;
}
int count(struct node* last){
if (last==NULL){
return 0;
}
return 1+count(last->left)+count(last->right);
}
void main()
{
struct node* last=create(1);
last->left=create(2);
last->right=create(3);
last->left->left=create(4);
last->right->right=create(5);
printf("total nodes= %d\n",count(last));
}