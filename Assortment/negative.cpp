#include <iostream>
using namespace std;

int main(){
	int size, nag;
	
	cout << "Enter the size of Array = " ;
	cin >> size ;
	
	int array[size];
	
	for(int i=0; i<size;i++ ){
	cout << "Enter the " << i << " array's elements = "  ;
	cin >> array[i];
	}
	
	cout << "Negative elements from an Array is : " ;
	for(int i=0; i<size; i++){   // 1 -52 21 -51 54 
		if(0 > array[i]){	
			nag = array[i];
			cout << nag << " , " ;
		}else if (0 < array[i]){
			cout << " " ;
		}
	}

	return 0;
}