#include <iostream>
using namespace std;

class Queue {
private:
    struct Node {
        int value;
        Node* next;
        Node(int val) : value(val), next(nullptr) {}
    };
    Node *front, *rear;  

public:
    Queue() : front(nullptr), rear(nullptr) {}

    ~Queue() {
        while (!isEmpty()) {
            pop();  
        }
    }

    void push(int value) {
        Node* newNode = new Node(value);
        if (rear) {
            rear->next = newNode; 
        } else {
            front = newNode;  
        }
        rear = newNode;  
    }

    void pop() {
        if (front) {
            Node* temp = front;
            front = front->next;  
            if (!front) {  
                rear = nullptr;
            }
            delete temp;  
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    int peek() {
        if (front) {
            return front->value;  
        } else {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
    }

    int size() {
        int count = 0;
        Node* current = front;
        while (current) {
            count++;
            current = current->next;
        }
        return count;
    }

    bool isEmpty() {
        return front == nullptr;  
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    cout << "Front element: " << q.peek() << endl;  
    q.pop();
    cout << "Front element after pop: " << q.peek() << endl;  
    cout << "Queue size: " << q.size() << endl;  
}


