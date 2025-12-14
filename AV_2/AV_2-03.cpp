#include <bits/stdc++.h>
using namespace std;

int main() {
    float a = 5, b = 7.5, c = 10.2, perimetar, ploshtina, s;
    perimetar = a + b + c;
    s = (a + b + c) / 2;
    ploshtina = s * (s - a) * (s - b) * (s - c);
    cout << "Permetarot e: " << perimetar << endl;
    cout << "Ploshtinata na kvadrat e: " << ploshtina << endl;
    return 0;
}
