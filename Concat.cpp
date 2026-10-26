#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstString;
    string secondString;
    string combinedString;

    for (int i = 1; i <= 3; i++) {
        cout << "\nString Test " << i << endl;

        cout << "Enter the first string: ";
        getline(cin, firstString);

        cout << "Enter the second string: ";
        getline(cin, secondString);

        combinedString = firstString + secondString;

        cout << "Concatenated Result: "
             << combinedString << endl;
    }

    cout << "\nAll three tests completed!" << endl;

    return 0;
}
