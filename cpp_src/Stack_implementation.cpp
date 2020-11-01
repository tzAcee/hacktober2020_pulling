/*Implemented Stack data structure without STL. Used classes and objects*/

#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

class Stack
{
    private:
        int *arr;
        int top;
        int size;

    public:
        
        Stack(int len = 10) // Consturctor with default value for length.
        {
            this->top = -1;                   // Will be used to keep a track of the number of items in the stack.
            this->size = len;
            arr = new int[size];
            for (int i = 0; i < 5; i++) // All elemets will be 0
            {
                this->arr[i] = 0;
            }
            
        }

        bool isEmpty()                  // Will check is the stack is empty
        {
            if(this->top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        bool isFull()                   // Will check is the stack is full
        {
            if(this->top == (size - 1))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void push(int &entry)            // To enter new elements in the stack
        {
            if(this->isFull())
                cout << "Stack Overflow.\n";
            else
            {
                this->top++;  // Increment top as new value is added.
                this->arr[this->top] = entry;
            }
        }

        int pop()                       // To remove the top element
        {
            if(this->isEmpty())
            {
                cout << "Stack Underflow.\n";
                return 0;
            }
            else
            {
                int popValue = this->arr[this->top];
                this->arr[this->top] = 0;
                this->top--;          // Deccrease value and also assign it to 0
                return popValue;
            }
        }

        int count()
        {
            return (this->top + 1);
        }

        int peek(int &pos)
        {
            if(this->isEmpty())
            {
                cout << "Stack Underflow.\n";
                return 0;
            }
            else
            {
                return this->arr[pos];
            }
        }

        void change(int &pos, int &value)
        {
            this->arr[pos] = value;
            cout << "Value changed at location: " << pos << endl;
        }

        void display()
            {
                cout << "All values in the stack are:\n";
                for(int i = (size - 1); i >= 0; i--)
                {
                    cout << this->arr[i] << "  ";
                }
            }
};

int main()
{
    Stack s;
    int option, position, value;

    do
    {
        cout << "\nWhat operation do you want to perfrom? Select option number. Press 0 to exit\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty()\n";
        cout << "4. isFull()\n";
        cout << "5. peek()\n";
        cout << "6. count()\n";
        cout << "7. change()\n";
        cout << "8. display()\n";
        cout << "9. Clear Screen\n\n";

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter a value to push: ";
            cin >> value;
            s.push(value);
            break;
        
        case 2:
            cout << "Poped value: " << s.pop() << endl;
            break;
        
        case 3:
            if(s.isEmpty())
            {
                cout << "Empty.\n";
            }
            else
            {
                cout << "Not Empty.\n";
            }
            break;

        case 4:
             if(s.isFull())
            {
                cout << "Full.\n";
            }
            else
            {
                cout << "Not Full.\n";
            }
            break;

        case 5:
            cout << "Enter the position of item you want to peek: ";
            cin >> position;
            cout << "Peeked item is: " << s.peek(position) << endl;
            break;

        case 6:
            cout << "No. of elements in stack are: " << s.count() << endl;
            break;

        case 7:
            cout << "Enter the position of change: ";
            cin >> position;
            cout << "Enter new value: ";
            cin >> value;
            s.change(position, value);
            cout << "Changes are done.\n";
            break;

        case 8:
            s.display();
            cout << endl;
            break;

        case 9:
            system("cls");
            break;      
        default:
            cout << "Enter proper option\n";
            break;
        }
    }while(option != 0);

    cout << "Succesfully exited.";

    return 0;
}