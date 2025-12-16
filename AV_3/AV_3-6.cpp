#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || c + a <= b) {
        cout << "Nemoze da se konstruira triagolnik" << endl;
    } else {
        if (a >= b) {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if (b >= c) {
            b = b + c;
            c = b - c;
            b = b - c;
        }
        if (c * c == a * a + b * b) {
            cout << "Pravoagolen triagolnik" << endl;
        } else if (a == b && b == c) {
            cout << "Ramnostran triagolnik" << endl;
        } else if (a == b || b == c || c == a) {
            cout << "Ramnokrak triagolnik" << endl;
        } else {
            cout << "Raznostran triagolnik" << endl;
        }
    }
    return 0;
}
