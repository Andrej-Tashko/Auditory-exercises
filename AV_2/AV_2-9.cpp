#include <bits/stdc++.h>
using namespace std;

int main() {
    float cena, rati, kamata, rata, vkupno;
    cout << "Vnesi cena, rati i kamata (kamatata vnesena treba da e pomegju 0 i 100): " << endl;
    cin >> cena >> rati >> kamata;
    vkupno = cena * (1 + kamata/100);
    rata = vkupno / rati;
    cout << "Edna rata iznesuva: " << rata << endl;
    cout << "Vkupnata suma e: " << vkupno << endl;
    return 0;
}
