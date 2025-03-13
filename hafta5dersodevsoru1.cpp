#include <iostream>
using namespace std;

int main() {
    int secim;
    cout << "Kahve Otomatina Hos Geldiniz!" << endl;
    cout << "Lutfen bir kahve secin:" << endl;
    cout << "1 - Espresso (Fiyat: 15 TL, Sure: 3 dk)" << endl;
    cout << "2 - Latte (Fiyat: 20 TL, Sure: 4 dk)" << endl;
    cout << "3 - Mocha (Fiyat: 25 TL, Sure: 5 dk)" << endl;
    cout << "4 - Turk Kahvesi (Fiyat: 10 TL, Sure: 3 dk)" << endl;
    cout << "Seciminiz: ";
    cin >> secim;

    switch (secim) {
    case 1:
        cout << "Espresso sectiniz. Fiyat: 15 TL. Hazirlanma suresi: 3 dakika." << endl;
        cout << "Afiyet olsun!" << endl;
        break;
    case 2:
        cout << "Latte sectiniz. Fiyat: 20 TL. Hazirlanma suresi: 4 dakika." << endl;
        cout << "Afiyet olsun!" << endl;
        break;
    case 3:
        cout << "Mocha sectiniz. Fiyat: 25 TL. Hazirlanma suresi: 5 dakika." << endl;
        cout << "Afiyet olsun!" << endl;
        break;
    case 4:
        cout << "Turk Kahvesi sectiniz. Fiyat: 10 TL. Hazirlanma suresi: 3 dakika." << endl;
        cout << "Afiyet olsun!" << endl;
        break;
    default:
        cout << "Gecersiz secim!" << endl;
        cout << "Afiyet olsun!" << endl;

        break;
    }

    
    return 0;
}