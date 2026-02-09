#include <iostream>

using namespace std;

int main() {
    cout << "Enter a string: ";
    string text;
    getline (cin, text);
    for (int i = text.length() - 1; i >= 0; --i) {
        cout << text[i];
    }

}