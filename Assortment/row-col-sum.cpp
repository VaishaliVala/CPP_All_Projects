#include <iostream>
using namespace std;

int main(){
	int row, col, sum = 0;
	
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
	//   j
	// i [0][0]  +  [0][1]
	//   [1][0]  +  [1][1]
	//   [2][0]  +  [2][1]
	int rownum;
		cout << "Enter the row number: " ;
		cin >> rownum ;
	
	if (rownum >=0 && rownum < row){
		cout << "Elements of row " << rownum  << " : "  ;
		for (int j = 0; j < col; j++){         // 0 < col(j)
			cout << array[rownum][j] << " " ;  
			sum = sum + array[rownum][j];    // [0][0]  [0][1]
		}
		cout << endl << "Sum of rownum " << rownum << " Elements is : " << sum << endl ;
		cout << endl ;
		
	}else{
		cout << "Enter valid row number..." ;
	}
	//   j
	// i [0][0]    [0][1]
	//      +         +
	//   [1][0]    [1][1]
	//      +         +
	//   [2][0]    [2][1]
	int colnum;
		cout << "Enter the column number: " ;
		cin >> colnum ;

	if (colnum >= 0 && colnum < col){
		sum = 0 ;
		cout << "Elements of column " << colnum  << " : "  ;
		for (int i = 0;i < row; i++){   // 0 < row(i)
			cout << array[i][colnum] << " " ;
			sum = sum + array[i][colnum];  // [0][0]  [1][0]  [2][0]
		}
		cout << endl << "Sum of colnum " << colnum << " Elements is : " << sum << endl ;
		cout << endl ;
		
	}else{
		cout << "Enter valid col number..." ;
	}

	return 0;
}