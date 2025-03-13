#include <iostream>
#include <string>
using namespace std;

int main() {
    string cumle;
    cout << "Bir cumle girin: ";
    getline(cin, cumle);

    string tersKelime = "";
    int i = 0;

    while (i <= cumle.length()) {
        if (i == cumle.length() || cumle[i] == ' ') {
            for (int j = tersKelime.length() - 1; j >= 0; j--) {
                cout << tersKelime[j];
            }
            if (i != cumle.length()) {
                cout << " ";
            }
            tersKelime = "";
        }
        else {
            tersKelime += cumle[i];
        }
        i++;
    }

    cout << endl;
    return 0;
}