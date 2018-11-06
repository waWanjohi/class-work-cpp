#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

//A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

//A utility function to do in order traversal of BST
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d \n", root->key);
        inOrder(root->right);
    }
}

//A utility function to insert a new node with hte given key in BST
struct node *insert(struct node *node, int key)
{
    /* if the tree is empty, return a new node*/
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);

    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

// Driver Program to set the above functions
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // print inOder traversal of the BST
    inOrder(root);


    return 0;
}
