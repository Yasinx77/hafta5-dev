#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "bir sayi girin (0 girerek cikabilirsiniz)" << endl;
    cin >> sayi;

    while (sayi != 0) {

        cout << "bir sayi girin" << endl;
        cout << "Girdiginiz sayi: " << sayi << endl;
        cin >> sayi;
    }

    cout << "..............................." << endl;
    cout << "Program sonlandirildi" << endl;
    cout << "..............................." << endl;

    return 0;
}