#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c || b + c > a || c + a > b) {
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
            cout << "Pravoagolen triagolnik i plostinata e: " << a * b / 2 << endl;
        } else {
            cout << "Nepravoagolen triagolnik" << endl;
        }
    } else {
        cout << "Nemoze da se konstruira triagolnik" << endl;
    }
    return 0;
}
