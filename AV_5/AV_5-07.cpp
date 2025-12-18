#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n) {
        int i; cin >> i;
        if (i % 5 == 0) cout << "-----" << endl;
        else if (i % 5 == 1) cout << ".----" << endl;
        else if (i % 5 == 2) cout << "..---" << endl;
        else if (i % 5 == 3) cout << "...--" << endl;
        else cout << "....-" << endl;
        n--;
    }
    return 0;
}
