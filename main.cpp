#include <iostream>
#include <memory>

class Node {
public:
    int data;
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev; // aby zapobiec cyklicznym odwołaniom

    Node(int data) : data(data) {}
//    ~Node(){
//        std::cout << data << " usuniete" << std::endl;
//    }
};

class DoublyLinkedList {
private:
    std::shared_ptr<Node> head;
    std::shared_ptr<Node> tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    bool isEmpty() const {
        return head == nullptr;
    }

    void addToFront(int data) {
        auto newNode = std::make_shared<Node>(data);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void addToEnd(int data) {
        auto newNode = std::make_shared<Node>(data);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void removeFromFront() {
        if (isEmpty()) {
            std::cout << "Lista jest pusta." << std::endl;
            return;
        }
        head = head->next;
        if (head) head->prev.reset();
    }

    void removeFromEnd() {
        if (isEmpty()) {
            std::cout << "Lista jest pusta." << std::endl;
            return;
        }
        tail = tail->prev.lock(); //Aby uzyskać dostęp do zarządzanego obiektu, trzeba go zamienić na std::shared_ptr za pomocą lock()
        if (tail) tail->next.reset();
    }

    void display() const {
        if (isEmpty()) {
            std::cout << "Lista jest pusta!" << std::endl;
            return;
        }
        auto current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.addToFront(10);
    list.addToFront(20);
    list.addToEnd(30);
    list.addToEnd(40);

    std::cout << "Lista po dodaniu liczb: " << std::endl;
    list.display();

    list.removeFromFront();
    list.removeFromEnd();
    std::cout << "Lista po usunieciu liczby z poczatku i konca: " << std::endl;
    list.display();

    return 0;
}
