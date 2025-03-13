#include <iostream>
#include <string>
using namespace std;

int main() {
    string cumle;
    char harf;
    int sayac = 0, i = 0;

    cout << "Bir cumle girin: ";
    getline(cin, cumle); // Cümleyi al
    cout << "Bir harf girin: ";
    cin >> harf; // Harfi al

    do {
        if (cumle[i] == harf) {
            sayac++; // Harf eşleşirse sayaç artır
        }
        i++;
    } while (i < cumle.length()); // Döngü cümlenin sonuna kadar sürsün

    cout << "Cumlenizde " << harf << " harfi " << sayac
        << " kez geciyor, bu harf size ugur getiriyor!" << endl;

    return 0;
}