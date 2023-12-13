#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* head;
    int capacity;
    int stackSize;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        head = NULL;
        stackSize = 0;
    }

    void push(int data) {
        if (stackSize == capacity) {
            cout << "Overflow" << endl;
            return;
        }
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        stackSize++;
    }

    int peek() {
        if (head == NULL) {
            cout << "Underflow" << endl;
            return -1; // Return a special value to indicate error
        }
        return head->data;
    }

    int pop() {
        if (head == NULL) {
            cout << "Underflow" << endl;
            return -1; // Return a special value to indicate error
        }
        int result = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        stackSize--;
        return result;
    }

    bool isEmpty() {
        return head == NULL;
    }

    bool isFull() {
        return stackSize == capacity;
    }

    void displayStack() {
        Node* temp = head;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the stack: ";
    cin >> capacity;

    Stack saurabhStack(capacity);

    int choice;
    do {
        cout << "\nStack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Is Full" << endl;
        cout << "6. Display Stack" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter a value to push: ";
                cin >> value;
                saurabhStack.push(value);
                break;
            }
            case 2: {
                cout << "Pop: " << saurabhStack.pop() << endl;
                break;
            }
            case 3: {
                int topValue = saurabhStack.peek();
                if (topValue != -1) {
                    cout << "Peek: " << topValue << endl;
                }
                break;
            }
            case 4: {
                cout << (saurabhStack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;
            }
            case 5: {
                cout << (saurabhStack.isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;
            }
            case 6: {
                saurabhStack.displayStack();
                break;
            }
            case 7: {
                cout << "Exiting the program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 7);

    return 0;
}
