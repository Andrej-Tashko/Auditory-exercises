#include <bits/stdc++.h>
using namespace std;

int zbirNaCifri(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool Prime(int n) {
    int k = zbirNaCifri(n);
    if (k < 2 || n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    for (int i = 2; i * i <= k; i++) {
        if (k % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i < 10000; i++) {
        if (Prime(i))
            cout << i << " ";
    }
    return 0;
}