#include <iostream>
#include <string>
using namespace std;

void printPyramidPattern(const string & input) {
    size_t length = input.length();
    size_t totalWidth = 1 + 2 * (length - 1);

    for (size_t i = 1; i <= length; i += 1) {
        if (i == 1) {
            cout << string((totalWidth - 1) / 2, ' ') << input[0] << endl;
            continue; // Skip the rest of the loop for the first iteration
        }
        cout << string(length - i, ' ');

        for (size_t j = 0; j < i; j += 1) {
            cout << input[j];
        }
        int j = static_cast<int>(i) - 2;
        for (; j >= 0;  j -= 1) {
            cout << input[j];
        }

        cout << endl;
    }
}

int main() {
    string userString;
    cout << "Enter the string: ";
    getline(cin, userString);
    printPyramidPattern(userString);
    return 0;
}


