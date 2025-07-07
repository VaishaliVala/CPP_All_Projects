// #include<iostream>
// using namespace std;

// int main(){
//     int per;

    
//     cout << "Enter Your Persentage:" << endl;
//     cin >> per;
//     (per >= 90 && per <= 100) ? cout << "Grade A" << endl :
//     (per >= 80 && per <90) ? cout << "Grade B" << endl :
//     (per >= 70 && per <80) ? cout << "Grade C" << endl :
//     (per >= 60 && per <70) ? cout << "Grade D" << endl :
//     (per >= 50 && per <60) ? cout << "Grade E" << endl :
//     (per >= 40 && per <50) ? cout << "Grade F" << endl :
//                   cout << "Fail";



//     // Task 2
//     switch(per){
//         case 'A':
//             cout << "Excellent work!" << endl ;
//             break;
//         case 'B':
//             cout << "Well Done" << endl ;
//             break;
//         case 'C':
//             cout << "Good Job" << endl ;
//             break;
//         case 'D':
//             cout << "You passed, but you could do better." << endl ;
//             break;
//         default:
//             cout << "Sorry, you are fail.";
//             break;
//     }


//     // Task 3

//     if(per>=50 && per<=100){
//         cout << "You are eligible for the next level." << endl;
//     }       
//     else{
//         cout << "Please try again next time." << endl;
//     }                 
    
    
    
    
//     return 0;
// }



#include<iostream>
using namespace std;

int main() {
    int per;
    char grade;

    cout << "Enter Your Percentage: ";
    cin >> per;

    // Task 1: grade using nested ternary operator
    grade = (per >= 90 && per <= 100) ? 'A' :
            (per >= 80 && per <= 100) ? 'B' :
            (per >= 70 && per <= 100) ? 'C' :
            (per >= 60 && per <= 100) ? 'D' :
            (per >= 50 && per <= 100) ? 'E' :
            (per >= 40 && per <= 100) ? 'F' : 'X'; // 'X' for fail

    cout << "Grade: " << grade << endl;

    // Task 2: Show message based on grade
    if(per>0 && per <=100){
        switch(grade) {
            case 'A':
                cout << "Excellent work!" << endl;
                break;
            case 'B':
                cout << "Well Done" << endl;
                break;
            case 'C':
                cout << "Good Job" << endl;
                break;
            case 'D':
                cout << "You passed, but you could do better." << endl;
                break;
            case 'E':
                cout << "Barely passed. Work harder!" << endl;
                break;
            case 'F':
                cout << "Very low marks. Improve more." << endl;
                break;
            default:
                cout << "Sorry, you are fail." << endl;
                break;
        }        
    }else{
        cout << "Enter valid Percentage..." << endl ;
    }

    // Task 3: Check eligibility
    (per >= 50 && per <= 100) 
        ? cout << "You are eligible for the next level." << endl 
        : cout << "Please try again next time." << endl;

    return 0;
}
