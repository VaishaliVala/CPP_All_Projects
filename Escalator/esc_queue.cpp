#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, cap;
    int* arr;

public:
    Queue(int size) {
        cap = size;
        arr = new int[cap];
        front = 0;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    
    void enqueue(int value) {     // Enqueue
        if (isFull()) {
            cout << "Queue was Overflow so Cannot enqueue. " << value << endl;
        } else {
            rear = rear + 1;
            arr[rear] = value;
            cout << value << " enqueued to queue." << endl;
        }
    }

    void dequeue() {  // Dequeue
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued from queue." << endl;
            front++;
        }
    }

    void peek() {   // Peek
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front element in the Queue is : " << arr[front] << endl;
        }
    }

    bool isEmpty() {   // Is Empty
        return front > rear;
    }

    bool isFull() {    // Is Full
        return rear == cap - 1;
    }

    int size() {    // Size
        return isEmpty() ? 0 : (rear - front + 1);
    }

    void display() {      // Display
        cout << "Front Element of Queue : " << arr[front] << endl;
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size, choice, value;

    cout << "Enter Queue size: ";
    cin >> size;

    Queue q(size);

    do {
        cout << "--- QUEUE MENU ---" << endl ;
        cout << "1. Enqueue" << endl ;
        cout << "2. Dequeue" << endl ;
        cout << "3. Peek (Front element)" << endl ;
        cout << "4. Display" << endl ;
        cout << "5. Size" << endl ;
        cout << "6. Is Empty?" << endl ;
        cout << "7. Is Full?" << endl ;
        cout << "0. Exit" << endl ;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Current queue size: " << q.size() << endl;
            break;

        case 6:
            if(q.isEmpty()){
                cout << "Queue is empty." << endl ;
            }else{
                cout << "Queue is not empty." << endl;
            }           
            break;
        case 7:
            if(q.isFull()){
                cout << "Queue is Full." << endl ;
            }else{
                cout << "Queue is not Full." << endl;
            }
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
