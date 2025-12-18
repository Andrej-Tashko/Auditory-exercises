#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, a = 0, b = 0, c = 0;
    cin >> i;
    while(i) {
        int n; cin >> n;
        if (n%3==0)
            a++;
        else if (n%3==1)
            b++;
        else
            c++;
        i--;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}