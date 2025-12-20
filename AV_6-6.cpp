#include <bits/stdc++.h>
using namespace std;

long long Factorial(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++) {
        prod *= i;
    }
    return prod;
}

long long Zbir(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return Factorial(sum);
}

int main() {
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cout << Zbir(i) << endl;
    }
    return 0;
}