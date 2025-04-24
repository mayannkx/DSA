#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *rchild;
    struct node *lchild;
};
struct node *create()
{
    int x,z,num;
    char choice;
    struct node *A;
    printf("Enter value of first node: \n");
    scanf("%d",&x);
    A=(struct node *)malloc(sizeof(struct node));
    A->rchild = NULL;
    A->data = x;
    A->lchild = NULL;
    printf("Enter how many nodes you want to store in tree: \n");
    scanf("%d",&num);
    struct node *B;
    struct node *C=A;
    struct node *parent;
    for (int i=1; i<num; i++)
    {
        parent = C;
        printf("Enter where you want to add new node ('r' for 'right' or 'l' for 'left'):\n");
        scanf(" %c",&choice);
        printf("Enter value of node: \n");
        scanf("%d",&z);
        B = (struct node *)malloc(sizeof(struct node));
        B->data =z;
        B->rchild = NULL;
        B->lchild = NULL;
        if(choice == 'r')
        {
            C->rchild = B;
        }
        else if(choice == 'l')
        {
            C->lchild = B;
        }
        else
        {
            printf("Invalid choice...\n");
            free(B);
            i--;
        }
    }
    return A;
}
void preorder(struct node *A)
{
    if(A!=NULL)
    {
        printf("%d ",A->data);
        preorder(A->lchild);
        preorder(A->rchild);
    }
}
void inorder(struct node *A)
{
    if(A!=NULL)
    {
        inorder(A->lchild);
        printf("%d ",A->data);
        inorder(A->rchild);
    }
}
int main ()
{
    struct node *root = create();
    printf("preorder sequince..\n");
    preorder(root);
    printf("\ninorder sequince..\n");
    inorder(root);
    return 0;
}
