#include <bits/stdc++.h>
using namespace std;

bool Prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int Pogolem(int n) {
    int x = n + 1;
    while (!Prime(x)) {
        x++;
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    if (!n) cout << 2;
    else cout << Pogolem(n) << " - " << n << " = " << Pogolem(n) - n;
    return 0;
}
