#include <iostream>

using namespace std;

/* Linked list structure*/
struct list
{
	int data;
	struct list *prev;
	struct list *next;
} *node = NULL, *first = NULL, *last = NULL, *node1 = NULL, *node2 = NULL;

class linkedList
{

  public:
	// Funtion for create/insert node at the beginning of the linked list
	void insert_beginning()
	{

		list *addBeg = new list;
		cout << "Enter value of the node: " << endl;
		cin >> addBeg->data;

		if (first == NULL)
		{

			addBeg->prev = NULL;
			addBeg->next = NULL;
			first = addBeg;
			last = addBeg;

			cout << "Linked list created!";
		}
		else
		{

			addBeg->prev = NULL;
			first->prev = addBeg;
			addBeg->next = first;
			first = addBeg;
			cout << "Data inserted at the beginning of the Linked list!" << endl;
		}
	}

	void insert_end()
	{
		list *addEnd = new list;
		cout << "Enter value of node: " << endl;
		cin >> addEnd->data;

		if (first = NULL)
		{
			addEnd = NULL;
			addEnd->next = NULL;
			first = addEnd;
			last = addEnd;
			cout << "Linked list created!" << endl;
		}

		else
		{
			addEnd->next = NULL;
			last->next = addEnd;
			addEnd->prev = last;
			last = addEnd;

			cout << "Data inserted at the beginning of the linked list!" << endl;
		}
	}
	//Function for displaying linked list
	void display()
	{
		node = first;
		cout << "List of data in linked list in Ascending order" << endl;

		while (node != NULL)
		{
			cout << node->data << endl;
			node = node->next;
		}

		node = last;

		cout << "List of data in Linked list in descending order!" << endl;

		while (node != NULL)
		{
			cout << node->data << endl;
			node = node->prev;
		}
	}
	//Function for deleting node from linked list
	void del()
	{
		int count = 0, number, i;
		node = node1 = node2 = first;

		for (node = first; node != NULL; node = node->next)
			cout << "Enter the value for the node: " << endl;

		count++;

		display();

		cout << count << "nodes are available here!" << endl;
		cout << " Enter the  node number which you want to delete: " << endl;

		cin >> number;

		if (number != 1)
		{

			if (number < count && number > 0)
			{

				for (int i = 2; i <= number; ++i)
					node = node->next;

				for (i = 2; i <= number - 1; i++)
					node1 = node1->next;

				for (i = 2; i <= number + 1; i++)
					node2 = node2->next;
				node2->prev = node1;
				node1->next = node2;
				node->prev = NULL;
				node->next = NULL;
				node = NULL;
			}

			else if (number == count)
			{
				node = last;
				last = node->prev;
				last->next = NULL;
				node = NULL;
			}

			else
				cout << "Invalid node number!" << endl;
		}

		else
		{
			node = first;
			first = node->prev;
			first->prev = NULL;
			node = NULL;
		}

		cout << "Node has been deleted succesfully!" << endl;
	}
};

int main()
{
	int op = 0;

	linkedList llist = linkedList();

	while (op != 4)
	{

		cout << "1. Insert at the beginning\n2. Insert at the end\n3. delete\n4. display\n5.Exit" << endl;

		cout << "Enter your choice: " << endl;
		cin >> op;

		switch (op)
		{

		case 1:
			llist.insert_beginning();
			break;

		case 2:
			llist.insert_end();
			break;

		case 3:
			llist.del();
			break;

		case 4:
			llist.display();
			break;

		case 5:
			cout << "Bye bye!" << endl;
			return 0;
			break;

		default:
			cout << "Invalid choice!" << endl;
		}
	}

	return 0;
}
