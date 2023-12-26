#include <iostream>
#include "calc.h"
using namespace std;

void main() {
    
    int N;
    while(true)
    {
        cout << "Enter N: ";
        cin >> N;

        if (N >= 0) {
            int result = calc(N);
            cout << "The " << N << "-th element of the sequence is: " << result << std::endl;
        }
        else {
            cout << "Invalid input. N should be a non-negative integer." << std::endl;
        }

    }
}
