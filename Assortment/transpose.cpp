#include <iostream>
using namespace std;

int main(){
	int size;
	
	cout << "Enter the array's row and col size = " ;
	cin >> size;
	int row=size, col=size;
	int array[row][col];
	
	cout << "Enter array's elements: " << endl ;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
		cout << "array["<< i <<"]["<< j << "] = " ;
		cin >> array[i][j];	
		}
	}
	cout << endl ;
	cout << "Transpose of elements..." << endl ;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout << array[i][j] << "  ";
		}
		cout << endl ;
	}
	cout << endl;
	
	return 0;
}