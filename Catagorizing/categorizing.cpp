#include <iostream>
using namespace std;

// Sorting and Searching Algorithms 
int linear_search(int array[], int s, int key) {
    for (int i = 0; i < s; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void merge(int arr[], int low, int mid, int high) {
    int lr = mid - low + 1;
    int rr = high - mid;

    int leftpoint[lr], rightpoint[rr];

    for (int i = 0; i < lr; i++) {
        leftpoint[i] = arr[low + i];
    }
    for (int j = 0; j < rr; j++) {
        rightpoint[j] = arr[mid + 1 + j];
    }

    int leftInd = 0, rightInd = 0, k = low;
    while (leftInd < lr && rightInd < rr) {
        if (leftpoint[leftInd] <= rightpoint[rightInd]) {
            arr[k++] = leftpoint[leftInd++];
        } else {
            arr[k++] = rightpoint[rightInd++];
        }
    }

    while (leftInd < lr) {
        arr[k++] = leftpoint[leftInd++];
    }

    while (rightInd < rr) {
        arr[k++] = rightpoint[rightInd++];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}


int main() {
    int choice;

    do {
        cout << "Choose an option :" << endl;
        cout << "1. Sorting Algorithms" << endl;
        cout << "2. Searching Algorithms" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int sortChoice, size;
                cout << "Choose sorting algorithm :" << endl;
                cout << "1. Selection Sort" << endl;
                cout << "2. Merge Sort" << endl;
                cout << "3. Exit" << endl;
                cout << "Enter your choice : ";
                cin >> sortChoice;

                if (sortChoice == 3) break;

                cout << "Enter the size of the array: ";
                cin >> size;
                int arr[size];

                cout << "Enter the elements of the array:" << endl;
                for (int i = 0; i < size; i++) {
                    cin >> arr[i];
                }

                switch (sortChoice) {
                    case 1:
                        cout << "You chose Selection Sort." << endl;
                        selectionSort(arr, size);
                        break;
                    case 2:
                        cout << "You chose Merge Sort." << endl;
                        mergeSort(arr, 0, size - 1);
                        break;
                    default:
                        cout << "Invalid sorting choice." << endl;
                        continue;
                }

                cout << "Sorted array:" << endl;
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 2: {
                int searchChoice;
                cout << "Choose searching algorithm:" << endl;
                cout << "1. Linear Search" << endl;
                cout << "2. Binary Search" << endl;
                cout << "3. Exit" << endl;
                cout << "Enter your choice : ";
                cin >> searchChoice;

                if (searchChoice == 3) break;

                int size, key;
                cout << "Enter the size of the array: ";
                cin >> size;

                int arr[size];
                int sorted[size];

                cout << "Enter the elements of the array:" << endl;
                for (int i = 0; i < size; i++) {
                    cin >> arr[i];
                    sorted[i] = arr[i];  // copy for sorting
                }

                cout << "Enter the key to search: ";
                cin >> key;

                if (searchChoice == 1) {
                    int index = linear_search(arr, size, key);
                    if (index != -1)
                        cout << "Element found at index: " << index << endl;
                    else
                        cout << "Element not found." << endl;
                }

                else if (searchChoice == 2) {
                    selectionSort(sorted, size);

                    int found = binary_search(sorted, size, key);
                    if (found) {
                        // find original index from unsorted array
                        int originalIndex = -1;
                        for (int i = 0; i < size; i++) {
                            if (arr[i] == key) {
                                originalIndex = i;
                            }
                        }
                        cout << "Element found at original index: " << originalIndex << endl;
                    } else {
                        cout << "Element not found." << endl;
                    }
                }
                else {
                    cout << "Invalid search choice!" << endl;
                }
                break;
            }

            case 0:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
