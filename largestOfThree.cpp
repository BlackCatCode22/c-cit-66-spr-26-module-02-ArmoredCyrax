#include <iostream>

using namespace std;

int main() {
    cout << "Enter your first integer: " << endl;
    int n;
    cin >> n;
    cout << "Enter your second integer: " << endl;
    int c;
    cin >> c;
    cout << "Enter your third integer: " << endl;
    int d;
    cin >> d;
    if (max(n, c) > d) {
        cout << max(n,c) << " is greatest" << endl;
    } else {
        cout << d << " is greatest";
    }
}