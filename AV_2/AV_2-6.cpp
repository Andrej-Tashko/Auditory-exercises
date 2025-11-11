#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b > a) {
        b = b + a;
        a = b - a;      //swap a and b
        b = b - a;
    }
    cout << "Suma: " << a + b << endl;
    cout << "Razlika: " << a - b << endl;
    cout << "Proizvod: " << a * b << endl;
    cout << "Ostatok: " << a % b << endl;
    return 0;
}
