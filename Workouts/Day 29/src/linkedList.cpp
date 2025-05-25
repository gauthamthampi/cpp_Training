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

    void deleteBeginning() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->getNext();
        delete temp;
    }

    void deleteEnd() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->getNext() == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(nullptr);
        delete temp;
    }

    Node* search(int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->getValue() == val) {
                return temp;
            }
            temp = temp->getNext();
        }
        cout << "Value not found. Invalid input!" << endl;
        return nullptr;
    }

    void update(int val, int newval) {
        Node* ptr = search(val);
        if (ptr != nullptr) {
            ptr->setValue(newval);
            cout << "Updated successfully." << endl;
        }
        else {
            cout << "Update failed. Invalid input!" << endl;
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

    void menu(LinkedList l1) const {
        int choice, val, newVal;

        while (true) {
            cout << "1. Insert at Beginning" << endl;
            cout << "2. Insert at End" << endl;
            cout << "3. Delete from Beginning" << endl;
            cout << "4. Delete from End" << endl;
            cout << "5. Search a Value" << endl;
            cout << "6. Update a Node" << endl;
            cout << "7. Display List" << endl;
            cout << "8. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Enter the value: ";
                cin >> val;
                l1.insertBeginning(val);
                break;
            case 2:
                cout << "Enter the value: ";
                cin >> val;
                l1.insertEnd(val);
                break;
            case 3:
                l1.deleteBeginning();
                break;
            case 4:
                l1.deleteEnd();
                break;
            case 5:
                cout << "Enter the value: ";
                cin >> val;
                if (l1.search(val)) {
                    cout << "Value found." << endl;
                }
                break;
            case 6:
                cout << "Enter value: ";
                cin >> val;
                cout << "Enter new value: ";
                cin >> newVal;
                l1.update(val, newVal);
                break;
            case 7:
                cout << "Linked list -> ";
                l1.display();
                break;
            case 8:
                exit(EXIT_SUCCESS);
            default:
                cout << "Invalid choice. Try again." << endl;
            }
        }
    }
};

int main() {
    LinkedList l1;
    l1.menu(l1);
    return 0;
}
