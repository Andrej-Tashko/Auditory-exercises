#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k = 0, p;
    cin >> n;
    p = n;
    while (n) {
        k = (k + n % 10) * 10;
        n /= 10;
    }
    cout << (p == k / 10);
    return 0;
}
