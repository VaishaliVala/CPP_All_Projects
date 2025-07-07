#include <iostream>
using namespace std;

int main(){
    int n, sum=0, first, last ;
    int temp = n; // store orignal value 

    cout << "Enter the Number for sum : " << endl; 
    cin >> n;
    
    last = n % 10;
    first = n;
    //  WHILE LOOP -SUM OF FIRST AND LAST NUMBER 

    while(first>=10){
        first = first / 10; // 123/10 = 12.3 ,12/10 = 1.2  that's why 12/10 = 1 is value of first= 1
    }
    sum = first + last;
    cout << " Sum of " << first << "and " << last << " Number was: " << sum << endl ;

    //  DO WHILE LOOP - SUM OF FIRST AND LAST NUMBER 
    
    // do{
    //     first = first / 10 ;
    // }while(first>=10);
    // sum = first + last;
    // cout << " Sum of " << first << " and " << last << " Number was: " << sum << endl ;

 
}