#include <iostream>
using namespace std;

int main() {
    char ch = 'A';  // starting from 'a'

    do {
        cout << ch << " ";
        ch = ch + 4;  // skip 3 alphabets  a + 4 = e: a,b,c,d,e
    } while (ch <= 'Z');

    return 0;
}
