#include<iostream>
using namespace std;

int main(){

    string n;
    int digit, count = 0;

    cout << "Enter the number for count digit : " ;
    cin >> n ;

    // 5487

    for(int i = 0; i < n.length(); i++) {
        count++;
    }
    cout << "The count of digit is : " << count ;

    return 0;
}