#include <iostream>

using namespace std;

void getAnIntFromTheUser();
void compareTwoInts();
void sumTwoInts();
int main() {
    getAnIntFromTheUser();
    compareTwoInts();
    sumTwoInts();
}
void getAnIntFromTheUser() {
    cout << "enter an integer: ";
    int integer;
    cin >> integer;
    cout << "You entered: " << integer << endl;
}
void compareTwoInts() {
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;
    cout << "Enter another integer: ";
    int another;
    cin >> another;
    cout << max(integer, another) << " is bigger." << endl;
}
void sumTwoInts() {
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;
    cout << "Enter another integer: ";
    int another;
    cin >> another;
    cout << integer << " + " << another << " = " << integer + another;
}