#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    char c;
    cin >> n >> k >> c;
    switch (c) {
        case '+':
            cout << n << " + " << k << " = " << n + k << endl;
            break;
        case '-':
            cout << n << " - " << k << " = " << n - k << endl;
            break;
        case '*':
            cout << n << " * " << k << " = " << n * k << endl;
            break;
        case '/':
            cout << n << " / " << k << " = " << n / k << endl;
            break;
    }

    return 0;
}
