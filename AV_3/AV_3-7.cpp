#include <bits/stdc++.h>
using namespace std;

int main() {
    float n;
    cin >> n;
    if (n < 0) {
        cout << "Vozrasta mora da bide pozitiven broj" << endl;
    } else if (n < 3) {
        cout << "Chovechkata vozrast na kucheto e " << n * 10.5 << endl;
    } else {
        cout << "Chovechkata vozrast na kucheto e " << 21 + (n - 2) * 4 << endl;
    }
    return 0;
}
