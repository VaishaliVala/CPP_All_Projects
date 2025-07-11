#include <iostream>
using namespace std;

int main(){
	
	int row, col;
	
	cout << "Enter the array's row size : " ;
	cin >> row ;
	
	cout << "Enter the array's column size : " ;
	cin >> col ;
	
	int array[row][col];
	
	cout << "Enter array's elements: " << endl ;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
		cout << "array["<< i <<"]["<< j << "] = " ;
		cin >> array[i][j];	
		}
	}
	int large = array[0][0];
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(array[i][j]>large){
				large = array[i][j];			// 2 1 54 6 
			}	
		}
	}
	cout << "The largest element is : " << large ;
	
	return 0;
}