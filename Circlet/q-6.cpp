#include <iostream>
using namespace std;

int main(){

    // 1                 1 
    // 1 2             2 1
    // 1 2 3         3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3 4 5 5 4 3 2 1

    for(int i=1; i<=5; i++){
        for(int v=1; v<=i; v++){
            cout << v << " " ;
        }
        for(int b=5; b>i; b--){
            cout << "    ";
        }
         for(int v=i; v>=1; v--){
            cout << v  << " ";
        }
        cout  << endl;
    }
    return 0;
}