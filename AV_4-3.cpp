#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, y = 1;
    cin >> x >> n;
    int k = n;
    while (k) {
        y *= x;
        k--;
    }
    cout << x << " ^ " << n << " = " << y << endl;
    return 0;
}