#include <iostream>
using namespace std;

int main() {
    system("cls");
    char stack[100];
    int top = -1;
    string kata;

    cout << "Masukan: ";
    cin >> kata;

    for (int i = 0; i < kata.length(); i++) {
        top++;
        stack[top] = kata[i];
    }

    cout << "Output: ";
    while (top >= 0) {
        cout << (char)toupper(stack[top]);
        top--;
    } cout << "\n";

    return 0;
}