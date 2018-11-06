#include <iostream>

using namespace std;


struct node 
{
    int data;
    struct node *next, *prev;
}*head, *tail;

int main(int argc, char const *argv[])
{
    //create a node
    struct node *temp = new node;
    temp->data = 0;
    temp->prev = NULL;


    
}
