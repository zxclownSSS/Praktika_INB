#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> arr; 

public:
    void push(int value) {
        arr.push_back(value);  
    }

    void pop() {
        if (!arr.empty()) {
            arr.pop_back();  
        } else {
            cout << "Stack is empty!" << endl;
        }
    }

    int peek() {
        if (!arr.empty()) {
            return arr.back();  
        } else {
            cout << "Stack is empty!" << endl;
            return -1;  
    }

    int size() {
        return arr.size(); 
    }

    bool isEmpty() {
        return arr.empty();  
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



