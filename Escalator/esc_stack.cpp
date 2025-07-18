#include <iostream>
using namespace std;
// menu driven using Stack with Array
class Stack {
private:
    int top;
    int cap;
    int* arr;

public:
    Stack(int size) {
        cap = size;
        arr = new int[cap];
        top = -1;
    }

    ~Stack() {
        delete[] arr; // array was delete
    }

    void push(int value) { // Push
        if (isFull()) {
            cout << "Stack was Overflow,so you Cannot push the element." << value << endl;
        } else {
            top = top + 1;
            arr[top] = value;
            cout << value << " pushed in stack." << endl;
        }
    }

    int pop() {  // POP
        if (isEmpty()) {
            cout << "In the Stack Nothing to pop." << endl;
            return -1;
        } else {
            cout << "Pop The Top element sucessfully." << endl;
            top = top - 1 ;
            return arr[top];
        }
    }

    int peek() {    // Peek
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {   // is empty
        return top == -1;
    }

    bool isFull() { // is full
        return top == cap - 1;
    }

    int size() { // Size of
        return top + 1;
    }

    void display() {   // Display
        if (isEmpty()) {
            cout << "Stack is empty.." << endl;
        } else {
            cout << "Stack elements : ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int choice, value;
    int size;

    cout << "Enter stack size: ";
    cin >> size;

    Stack s(size);

    do {
        cout << endl ;
        cout << "--- STACK MENU ---" << endl ;
        cout << "1. Push" << endl ;
        cout << "2. Pop" << endl ;
        cout << "3. Peek" << endl ;
        cout << "4. Display" << endl ;
        cout << "5. Size" << endl ;
        cout << "6. Is Empty?" << endl ;
        cout << "7. Is Full?" << endl ;
        cout << "0. Exit" << endl ;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << "Current size: " << s.size() << endl;
            break;
        case 6:
            // if(s.isEmpty()){
            // }
            
            cout << (s.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 7:
            cout << (s.isFull() ? "Stack is full." : "Stack is not full.") << endl;
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
