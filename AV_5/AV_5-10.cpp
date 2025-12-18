#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    switch (c) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            cout << "Cifra";
            break;
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "Samoglaska";
            break;
        default:
            cout << "Soglaska";
    }

    return 0;
}
