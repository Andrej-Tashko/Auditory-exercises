#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << 1;
    } else if (c >= 'A' && c <= 'Z') {
        cout << 0;
    } else if (c >= '0' && c <= '9') {
        cout << "cifra";
    }
    return 0;
}
