#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, max = 0;
    while (cin >> n) {
        if (n > 99) continue;
        if (max < n) max = n;
    }
    cout << max;
    return 0;
}
