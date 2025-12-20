#include <bits/stdc++.h>
using namespace std;

int Zbir(int i) {
    return (i % 100) + (i / 100);
}

int main() {
    for (int i = 1000; i < 10000; i++) {
        if (i % Zbir(i) == 0)
            cout << i << " ";
    }
    return 0;
}