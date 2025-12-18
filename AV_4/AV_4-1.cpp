#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 9, sum = 0;
    while (i < 100) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}
