#include <iostream>
using namespace std;

int main(){
    // QUESTION : 1
    // 41 
    // 41 42
    // 41 42 43
    // 41 42 43 44
    // 41 42 43 44 45

    for(int i=1; i<=5; i++){
        for(int v=1; v<=i; v++){
            cout << v + 40 << " " ;
        }
        cout << " " << endl;
    }

   



    return 0;
}