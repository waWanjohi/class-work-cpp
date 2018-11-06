#include <iostream>

using namespace std;

struct node
{
  int data;
  struct node *next;
};
class list
{
private:
  *head, *tail;

public:
  list()
  {
    *head = NULL;
    *tail = NULL;
  }


  void createNode(int x) {
    /* code */
    struct node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
      head = temp;
      tail = temp;
      temp = NULL;

    }
    else
    {
      tail->next = teemp;
      tail = temp;
    }

  }

  void display()
  {
    node *temp = new node;
    temp = head;
    while (temp != NULL) {
      /* code */
      std::cout << temp->data << " "<<endl;
      temp = temp->next;
    }
  }

  void insert_front (int x)
  {
    node *temp = new node;
    temp->data = x;
    temp->next = head;
    head = temp;

  }
};
int main()
{
  list ls;
  ls.insert(5);
  ls.insert(10);
  ls.insert(15);
  ls.insert(20);


  ls.display();

  ls.insert_front(0);
  ls.insert_front(25);
  ls.insert_front(35);
  ls.insert_front(45);

}
