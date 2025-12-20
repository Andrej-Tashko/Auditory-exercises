#include <bits/stdc++.h>
using namespace std;

float Diameter(float r) {
    return r * 2;
}

float Area(float r) {
    return 3.14 * r * r;
}

float Perimeter(float r) {
    return Diameter(r) * 3.14;
}

int main() {
    float r;
    cin >> r;
    cout << "Diameter " << fixed << setprecision(2) << Diameter(r) << endl;
    cout << "Area " << fixed << setprecision(2) <<  Area(r) << endl;
    cout << "Perimeter " << fixed << setprecision(2) << Perimeter(r) << endl;
    return 0;
}
