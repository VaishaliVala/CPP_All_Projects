#include <iostream>
using namespace std;

int main(){
    
    // * * * * *
    // *       *
    // * * * * *
    // * 
    // *

    for(int i=1; i<=5; i++){
        for(int v=1; v<=5; v++){
            if(i==1 || i==3 || v==1){
                cout << "* ";
            }else if(i==2 && v==5){
                cout << "* ";
            }else if(v==2 || v==3 ||v==4){
                 cout  << "  " ;
            }else if(i==4 && v==5){
                 cout  << "  " ;
            }
        }
        cout << " " << endl;
    }
}