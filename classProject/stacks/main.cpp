#include <iostream>
#include <stdlib.h>

using namespace std;

class Stacks
{
    // private:
        int stk [5];
        int top;

    public:
        int stack ()
        {
            top = -1;
        }

        void push(int x)
        {
            if (top>4)
            {
                cout << "Stack Overflow!";
                return;
            }
            stk[++top]=x;
            cout << "Inserted: "<<x;

        }

        void pop()
        {
            if (top<0)
            {
                cout << "Stack Underflow!";
                return;
            }
            cout << "Deleted: "<<stk[top--];
        }

        void display()
        {
            if (top<0)
            {
                cout << "Stack is empty!";
                return;
            }
            for (int i=top;i>=0;i--)
            {
                cout << stk[i]<<" ";
            }

        }
};

main()
{
    /* code */
    int ch;
    Stacks St;

    while(1)
    {
        cout << "\n1.push 2.pop 3.display 4.exit\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << "Enter the element: ";
                cin >> ch;
                St.push(ch);
                break;

            case 2:
                St.pop();
                break;

            case 3:
                St.display();
                break;
            
            case 4:
                exit(0);

        //     default:
        //         cout << "Double check your values"<<endl;               
        }
    }
    return (0);
    // return 0;
}
