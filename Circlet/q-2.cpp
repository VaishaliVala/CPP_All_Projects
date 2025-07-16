#include <iostream>
using namespace std;

int main(){
    // QUESTION : 2
    // 11
    // 12 13
    // 14 15 16
    // 17 18 19 20
    int b=11;
    for(int i=1; i<=4; i++){
        for(int v=1; v<=i; v++){
            cout << b << " " ;
            b++;
        }
        cout << " " << endl;
    }


    return 0 ;
}