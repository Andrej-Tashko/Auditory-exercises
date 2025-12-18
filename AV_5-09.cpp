#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        int tmp = k;
        while (k > 9) {
            if (k%10 >= ((k/10) % 10)) { flag = false; break;}
            k /= 10;
        }
        if (flag) cout << tmp << endl;
        flag = true;
    }
    return 0;
}
