#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Singly_linked_list {
private:
    Node* head;
    Node* newNode;
    Node* nextNode;

public:
    Singly_linked_list() {
        head = nullptr; 
        newNode = nullptr;
        nextNode = nullptr;
    }
   void append(int val) {   // 1. insert at end
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        
    }
    void insertAtBeginning(int value) { // 1. Insert at beginning
    newNode = new Node(value); // insert node
    newNode->next = head;
    head = newNode;
    cout << "Inserted " << value << " at the beginning." << endl;
}

    void search(int key) {   // 2. Search
    Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                cout << "Key found: " << key << endl;
            }
            temp = temp->next;
        }
    
    
}

    void deleteNode(int key) {    // 3. Delete node
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (prev == nullptr) {
            head = head->next; // head delete
        } else {
            prev->next = temp->next; // a -> b -> c ->  ma prev -> next = b and temp -> next = c
        }
        delete temp; // delete b
        cout << "Deleted node with key: " << key << endl;
    }

    void updateNode(int oldValue, int newValue) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == oldValue) {
            temp->data = newValue;
            cout << "Updated value " << oldValue << " to " << newValue << endl;
        }
        temp = temp->next;
    }
    cout << "Value " << oldValue << " not found in the list.";
}

    void reverse() {  // 4. Reverse the list
        Node* prev = nullptr;
        nextNode = head;

        while (nextNode != nullptr) {  // 10 20 30 40  = 40 30 20 10
            newNode = nextNode->next;  // new = 20, ..             newNode = nullptr
            nextNode->next = prev;     // 10 -> next = null, ..    [40]->next = [30]
            prev = nextNode;           // prev -> 10,   ..         prev → [40]
            nextNode = newNode;        // next -> 20,   ..         nextNode = nullptr
        }                              // ans = 10 -> null , ..  40->30->20->10->null

        head = prev;
        cout << "List reversed." << endl;
    }

    void display() {//display
        Node* current = head;
        cout << "List: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL";
    }
};
int main() {
    Singly_linked_list list;
    int choice, value;

    do {
        cout << endl ;
        cout << "--- Linked List Menu ---" << endl ;
        cout << "1. Insert at Beginning or end" << endl ;
        cout << "2. Search" << endl ;
        cout << "3. Delete Node" << endl ;
        cout << "4. Reverse List" << endl ;
        cout << "5. Display List" << endl ;
        cout << "6. Update value" << endl ;
        cout << "0. Exit" << endl ;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            int sub_choice;
                cout << "Press 1 for insert at bigining " << endl ;
                cout << "Press 2 for insert at end " << endl ;
                cin >> sub_choice;

                switch (sub_choice)
                {
                case 1:
                    cout << "Enter value to insert at bigining: ";
                    cin >> value;
                    list.insertAtBeginning(value);
                    break;
                case 2:
                    cout << "Enter value to insert at end: ";
                    cin >> value;
                    list.append(value);
                    break;
                default:
                cout << "Plese enter valid value.." ;
                    break;
                }
                cout << endl ;

                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                cout << endl ;
                list.search(value);
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                cout << endl ;
                list.deleteNode(value);
                break;
            case 4:
                list.reverse();
                break;
            case 5:
                list.display();
                break;
            case 6:
                int oldVal, newVal;
                cout << "Enter value to update: ";
                cin >> oldVal;
                cout << "Enter new value: ";
                cin >> newVal;
                list.updateNode(oldVal, newVal);
                break;
            case 0:
                cout << "Exiting program." << endl ;
                break;
            default:
                cout << "Invalid choice. Try again." << endl ;
        }

    } while (choice != 0);

    return 0;
}
