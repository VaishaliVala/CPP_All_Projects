#include <iostream>
using namespace std;

int main(){
//         5  
//       4 5 4  
//     3 4 5 4 3  
//   2 3 4 5 4 3 2  
// 1 2 3 4 5 4 3 2 1 
     for(int i=5; i>=1; i--){
        for(int n=i; n>1; n--){
            cout  << " " << " ";
        }
        for(int v=i; v<=5; v++){
            cout << v << " " ;
        }
        for(int b=4; b>=i; b--){
            cout << b << " ";
        }
        cout << " " << endl;
    }
}