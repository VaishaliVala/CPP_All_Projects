  #include <iostream>
  using namespace std;

  int main(){

  // QUESTION : 3
    //         5
    //       4 5 
    //     3 4 5
    //   2 3 4 5
    // 1 2 3 4 5

     for(int i=5; i>=1; i--){
        for(int n=i; n>1; n--){
            cout  << " " << " ";
        }
        for(int v=i; v<=5; v++){
            cout << v << " " ;
        }
        cout << " " << endl;
    }
    return 0;
  }
