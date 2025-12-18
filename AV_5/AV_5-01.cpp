#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 1000;
    while (i < 10000) {
        if ((i / 1000) == ((i%1000)/100 + (i%100)/10 + (i%10))) {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}
