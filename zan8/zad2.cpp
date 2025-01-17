#include <iostream>
#include <deque> // Используем deque для оптимизации

class Queue {
private:
    std::deque<int> arr; // Deque для хранения элементов очереди

public:
    // Конструктор (не требуется, но оставим для ясности)
    Queue() {}

    // Метод для добавления элемента в очередь
    void push(int value) {
        arr.push_back(value);
    }

    // Метод для удаления элемента из очереди
    void pop() {
        if (!isEmpty()) {
            arr.pop_front();
        } else {
            std::cout << "Очередь пуста!" << std::endl;
        }
    }

    // Метод для получения переднего элемента очереди
    int peek() const {
        if (!isEmpty()) {
            return arr.front();
        } else {
            std::cout << "Очередь пуста!" << std::endl;
            return -1; // Возвращаем -1, если очередь пуста
        }
    }

    // Метод для получения размера очереди
    int size() const {
        return arr.size();
    }

    // Метод для проверки, пуста ли очередь
    bool isEmpty() const {
        return arr.empty();
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    
    std::cout << "Передний элемент: " << q.peek() << std::endl;  
    q.pop();
    
    std::cout << "Передний элемент после удаления: " << q.peek() << std::endl;  
    std::cout << "Размер очереди: " << q.size() << std::endl;  

    return 0;
}
