#include <iostream>
using namespace std;

int main() {
    int sicaklik;

    cout << "Hava sicakligini girin (°C): ";
    cin >> sicaklik;

    if (sicaklik < 0) {
        cout << "Kalin mont giyin!" << endl;
    }
    else if (sicaklik >= 0 && sicaklik < 15) {
        cout << "Hirka yeterli olabilir." << endl;
    }
    else if (sicaklik >= 15 && sicaklik <= 25) {
        cout << "Hafif bir ceket iyi olur." << endl;
    }
    else {
        cout << "Tisort zamani!" << endl;
    }

    return 0;
}