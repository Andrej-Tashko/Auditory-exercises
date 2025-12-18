#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 10, sum = 0;
    while (i < 100) {
        if (i % 2 == 1) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}