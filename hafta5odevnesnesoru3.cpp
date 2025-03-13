#include <iostream>
#include <string>
using namespace std;

int main() {
    string mesaj;
    cout << "Bir mesaj girin: ";
    getline(cin, mesaj); // Kullanıcıdan mesaj alın

    int uzunluk = mesaj.length(); // Mesajın uzunluğunu bulun
    cout << "Mesajin uzunlugu: " << uzunluk << endl;

    int i = 0;
    while (i < uzunluk) {
        cout << "Karakter: " << mesaj[i] << " - ASCII Degeri: " << int(mesaj[i]) << endl;
        i++;
    }

    return 0;
}