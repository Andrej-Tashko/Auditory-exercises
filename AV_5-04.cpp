#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, max = 0, max2 = 0;
    while (cin >> n) {
        if (n > 99) continue;
        if (max < n) {
            max2 = max;
            max = n;
        }
        else if (max2 < n) max2 = n;
    }
    cout << max << " " << max2 << endl;
    return 0;
}