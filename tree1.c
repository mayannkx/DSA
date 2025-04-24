#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left;
    int value;
    struct node *right;
};

struct node *insert(struct node *t, int x) {
    if ( t == NULL) {
        t = (struct node *)malloc(sizeof(struct node));
        t->value = x;
        t->left = NULL;
        t->right = NULL;
        return t;
    }
    if (x < t->value)
        t->left = insert(t->left, x);
    else if (x > t->value)
        t->right = insert(t->right, x);
    return t;
}

void display(struct node *t) {
    if (t != NULL) {
        printf("%d ", t->value);
        printf("\n");
        display(t->left);
        display(t->right);
    }
}

struct node *search(struct node *t, int x) {
    while (t != NULL) {
        if (t->value == x)
            return t;
        else if (x< t->value)
            t = t->left;
        else
            t = t->right;
    }
    return NULL;
}

int main() {
    struct node *tree = NULL;
    tree = insert(tree,12);
    tree = insert(tree,3);
    tree = insert(tree,2);
    tree = insert(tree,31);
    tree = insert(tree,15);
    tree = insert(tree,17);
    tree = insert(tree,11);
    tree = insert(tree,1);
    tree = insert(tree,17);
    tree = insert(tree,19);
    tree = insert(tree,5);
    tree = insert(tree,54);
    tree = insert(tree,40);
    tree = insert(tree,0);
    tree = insert(tree,77);

    printf("Tree elements: \n");
    display(tree);
    printf("\nFound: %d",search(tree, 40));

    return 0;
}
