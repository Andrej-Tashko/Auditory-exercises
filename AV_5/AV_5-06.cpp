#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, prev, next, posiontPrev = 1, posiontNext = 2, sum, i = 2;
    cin >> prev >> next;
    sum = prev + next;
    while (cin >> n) {
        i++;
        if (sum < n + next) {
            sum = n + next;
            posiontPrev = i-1;
            posiontNext = i;
        }
        prev = next;
        next = n;
    }
    cout << sum << " " << prev << " " << next << " " << posiontPrev << " " << posiontNext << endl;
    return 0;
}
