#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> arr;  
    int front, rear;  

public:
    Queue() : front(0), rear(0) {}

    void push(int value) {
        arr.push_back(value);  
        rear++;
    }

    void pop() {
        if (front < rear) {
            front++;  
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    int peek() {
        if (front < rear) {
            return arr[front];  
        } else {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
    }

    int size() {
        return rear - front; 
    }

    bool isEmpty() {
        return front == rear; 
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



