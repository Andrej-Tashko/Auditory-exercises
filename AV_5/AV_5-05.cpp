#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum1 = 0, sum2 = 0, i = 0;
    while (cin >> n) {
        if (i%2 == 0) {
            sum1 += n;
        } else {
            sum2 += n;
        }
        i++;
    }
    int diff = abs(sum1 - sum2);
    if (diff < 10) cout << "Dvete se slicni" << endl;
    else cout << "Dvete sumi mnogu se razlikuvaat" << endl;
    return 0;
}
