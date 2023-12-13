#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;
Node* temp;

void Enqueue() {
    int val;

    cout << "\nInsert the element in queue: ";
    cin >> val;

    temp = new Node;
    temp->next = NULL;
    temp->data = val;

    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }

    cout << val << " is inserted successfully!!\n";
}

void Dequeue() {
    temp = front;

    if (front == NULL) {
        cout << "\nUnderflow" << endl;
        return;
    }

    if (temp->next != NULL) {
        temp = temp->next;
        cout << "Element " << front->data << " is deleted from the queue." << endl;
        delete (front);
        front = temp;
    } else {
        cout << "Element " << front->data << " is deleted from the queue." << endl;
        delete (front);
        front = NULL;
        rear = NULL;
    }
}

bool IsEmpty() {
    return (front == NULL) && (rear == NULL);
}

void Peek() {
    if (IsEmpty()) {
        cout << "\nQueue is empty" << endl;
    } else {
        cout << "Front element is: " << front->data << endl;
    }
}

void Clear() {
    front = rear = NULL;
    cout << "\nQueue is cleared" << endl;
}

void Display() {
    temp = front;
    if (IsEmpty()) {
        cout << "\nQueue is empty" << endl;
        return;
    }
    cout << "\nQueue elements are: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int ch;
    do {
        cout << "\n\tMenu\n";
        cout << "1) Enqueue\n";
        cout << "2) Dequeue\n";
        cout << "3) Display Queue\n";
        cout << "4) Is Empty\n";
        cout << "5) Front Element\n";
        cout << "6) Clear\n";
        cout << "0) Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 0:
                cout << "\nYou exited!!";
                exit(0);
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                cout << "\nQueue is " << (IsEmpty() ? "empty" : "not empty") << endl;
                break;
            case 5:
                Peek();
                break;
            case 6:
                Clear();
                break;
            default:
                cout << "\nError!!!\nPlease enter a valid choice" << endl;
        }
    } while (ch != 0);

    return 0;
}
