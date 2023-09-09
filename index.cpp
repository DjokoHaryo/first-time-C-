#include <iostream>
using namespace std;

int main() {
    char opr;
    double angka1, angka2;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> opr;

    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2;

    switch(opr) {
        case '+':
            cout << angka1 << " + " << angka2 << " = " << angka1 + angka2;
            break;

        case '-':
            cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
            break;

        case '*':
            cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
            break;

        case '/':
            if (angka2 != 0) {
                cout << angka1 << " / " << angka2 << " = " << angka1 / angka2;
            } else {
                cout << "Tidak dapat melakukan pembagian oleh nol.";
            }
            break;

        default:
            cout << "operator yang Anda masukkan tidak valid.";
            break;
    }

    return 0;
}
