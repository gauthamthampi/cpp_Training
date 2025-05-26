#include <iostream>
using namespace std;

class Node {
private:
    int value;
    Node* next;
public:
    Node(int val) {
        value = val;
        next = nullptr;
    }
    void setValue(int val) {
        value = val;
    }
    int getValue() {
        return value;
    }
    void setNext(Node* ptr) {
        next = ptr;
    }
    Node* getNext() {
        return next;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->setNext(head);
        head = newNode;
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        else {
            Node* temp = head;
            while (temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            temp->setNext(newNode);
        }
    }


    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->getValue() << " -> ";
            temp = temp->getNext();
        }
        cout << "Null" << endl;
    }
};

int main() {
    LinkedList l1;
    l1.insertEnd(30);
    l1.insertEnd(40);
    l1.display();
    return 0;
}