#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 90) {
        cout << "10";
    } else if (n > 80) {
        cout << "9";
    } else if (n > 70) {
        cout << "8";
    } else if (n > 60) {
        cout << "7";
    } else if (n > 50) {
        cout << "6";
    } else {
        cout << "5";
    }
    return 0;
}