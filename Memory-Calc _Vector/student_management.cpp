#include <iostream>
#include <vector>
using namespace std;

class Memory {
private:
    int id;
    string name;

public:
    Memory(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void display() {
        cout << "ID: " << id << endl ;
        cout << "Name: " << name << endl;
    }

    int getId(){
        return id;
    }
};

int main() {
    vector<Memory> students;
    int choice;

    do {
        cout << endl ;
        cout << "--- Student Management System ---" << endl ;
        cout << "1. Add Student" << endl ;
        cout << "2. Display All Students" << endl ;
        cout << "3. Search Student by ID" << endl ;
        cout << "4. Remove Student by ID" << endl ;
        cout << "5. Exit" << endl ;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl ;

        int id;
        string name;
        switch (choice) {
            case 1:// Add

                cout << "Enter student ID: ";
                cin >> id;

                cout << "Enter student name: ";
                cin >> name;

                students.push_back(Memory(id, name));
               
                cout << "Student added successfully." << endl ;
                cout << endl ;
                break;
            

            case 2: // display
                if (students.empty()) {
                    cout << "No students found." << endl ;
                } else {
                    cout << "--- Student List ---" << endl ;
                     for (int i = 0; i < students.size(); i++) {
                        students[i].display();
                    }
                }
                cout << endl ;
                break;
            

            case 3:  //  Search by ID
                int searchId;
                cout << "Enter ID to search: ";
                cin >> searchId;

                 for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == searchId) {
                        cout << "Student found:" << endl;
                        students[i].display();
                    }
                }
                if(id != searchId){
                    cout << "Student with ID " << searchId << " not found." << endl ;
                }
                cout << endl ;
                break;
            

            case 4: // remove
                int removeId;
                cout << "Enter ID of student to remove: ";
                cin >> removeId;

                 for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == removeId) {
                        students.erase(students.begin() + i);
                        cout << "Student with ID " << removeId << " removed." << endl;
                    }
                }
                if(id != removeId){
                    cout << "Student with ID " << id << " not found." << endl ;
                }
               cout << endl ;
                break;
            

            case 5:
                cout << "Exit the program." << endl ;
                cout << endl ;
                break;

            default:
                cout << "Invalid choice. Please try again..." << endl ;
        }

    } while (choice != 5);

    cout << "Thank you for Use..." << endl;
    return 0;
}


