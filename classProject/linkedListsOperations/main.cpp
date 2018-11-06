// A program with combined linked lists operations.

#include <iostream>

using namespace std;

class nodes
{
  public:
    void insertNode(int);
    void deleteNode();
    void display();
    int menu();
};

struct node // Declare node
{
    int num;
    node *next;
};
int counter = 0;

struct node *head = NULL; // Declare starting (head) node

void nodes::insertNode(int n) //  Insert node at the start
{
    struct node *newNode = new node;
    newNode->num = n;
    newNode->next = head;
    head = newNode;
}

void nodes::display() //Traverse/display all the nodes
{
    if (head == NULL)
    {
        cout << "List is empty!\n"
             << endl;
        return;
    }

    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }

    cout << endl;
}

void nodes::deleteNode() //Delete items from list
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    cout << head->num << " is removed!" << endl;
    head = head->next;
}
//menu operations
int nodes::menu()
{
    int choice;
    nodes d;
    char er;
    
    cout << "\n-------------------------------" << endl;
    cout << "     Operations on a list        " << endl;
    cout << "\n-------------------------------" << endl;
    cout << "1.Insert Nodes\t";
    cout << "2.Delete Nodes\t";
    cout << "3.Display List\t";
    cout << "4.Exit" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

        if (choice == 1)
        {
            cout << "Inserting ..." << endl;
            d.insertNode(10);
            d.insertNode(20);
            d.insertNode(30);
            d.insertNode(40);
            d.insertNode(50);
            cin.get();
        }
        else if (choice == 2)
        {
            cout << "Deleting ... " << endl;
            d.deleteNode();
            d.deleteNode();
            d.deleteNode();
            d.deleteNode();
            d.deleteNode();
        }
        else if (choice == 3)
        {
            cout << "Showing ..." << endl;
            d.display();
        }

        else if (choice == 4)
        {
            cout << "Quiting ..." << endl;
            void exit(int (*main)());
        }
        else
        {
            cout << "Error, abort!" << endl;
            void exit(int (*main)());
        }
    
}
// The main function
int main()
{

    nodes d;
    d.menu();
    

    return 0;
}