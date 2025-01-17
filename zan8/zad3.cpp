#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int value;
        Node* next;
        Node(int val) : value(val), next(nullptr) {}
    };
    Node* top;  

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (!isEmpty()) {
            pop();  
        }
    }

    void push(int value) {
        Node* newNode = new Node(value);  
        newNode->next = top;  
        top = newNode;  
    }

    void pop() {
        if (top) {
            Node* temp = top;
            top = top->next;  
            delete temp; 
        } else {
            cout << "Stack is empty!" << endl;
        }
    }

    int peek() {
        if (top) {
            return top->value;  
        } else {
            cout << "Stack is empty!" << endl;
            return -1;  
        }
    }

    int size() {
        int count = 0;
        Node* current = top;
        while (current) {
            count++;
            current = current->next;
        }
        return count;
    }

    bool isEmpty() {
        return top == nullptr;  
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    cout << "Top element: " << stack.peek() << endl;  
    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;  
    cout << "Stack size: " << stack.size() << endl;  
}

