#include <iostream>
using namespace std;

void printPattern(int n) {
    cout << "*\n";
    for (int i = 1; i <= n; i++) {
        cout << "*";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << "*\n";
    }
    for (int i = n - 1; i >= 1; i--) {
        cout << "*";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << "*\n";
    }
    cout << "*\n";
}
int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}