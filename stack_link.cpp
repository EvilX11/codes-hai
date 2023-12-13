// Stack using linked lists

#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node *top = NULL;

void push(int val) {
    Node *temp = new Node();
    temp->data = val;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top == NULL)
        cout << "\nStack Underflow" << endl;
    else {
        cout << "\nThe popped element is " << top->data << endl;
        top = top->next;
    }
}

void isempty() {
    if (top == NULL)
        cout << "\nStack is empty\n";
    else
        cout << "\nStack is not empty\n";
}

void peek() {
    if (top == NULL)
        cout << "\nStack is empty\n";
    else
        cout << "\nTop element is: " << top->data << endl;
}

void clear() {
    top = NULL;
    cout << "\nStack is cleared\n";
}

void display() {
    Node *ptr;
    if (top == NULL)
        cout << "\nStack is empty";
    else {
        ptr = top;
        cout << "\nStack elements are: ";
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

int main() {
    int ch, val;

    do {
        cout << "\n\tMenu\n";
        cout << "1. Push\n2. Pop\n3. Top Element\n4. IsEmpty\n5. Clear\n6. Display\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 0:
                cout << "\nYou exited!!";
                exit(0);
            case 1:
                cout << "\nEnter value to be pushed: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                isempty();
                break;
            case 5:
                clear();
                break;
            case 6:
                display();
                break;
            default:
                cout << "\nError!!!\nPlease Enter a valid choice" << endl;
        }
    } while (ch != 0);

    return 0;
}
