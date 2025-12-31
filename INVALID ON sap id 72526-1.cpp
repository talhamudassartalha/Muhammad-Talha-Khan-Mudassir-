#include <iostream>
using namespace std;

int main() {
    int i;

    while (true) {  
        cout << "Enter a number: ";
        cin >> i;

        if (i == -1) {
            cout << "You entered an invalid number" << endl;
            break;  
        }

        cout << "You entered: " << i << endl;
    }

    return 0;
}

