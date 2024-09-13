#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int jumlah;
    
    while (true) {
        cout<<"Masukkan jumlah pengulangan atau 'exit' untuk berhenti: ";
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        // konversi input menjadi angka
        try {
            jumlah = stoi(input);
        } catch (...) {
            cout<<"Input tidak valid. Masukkan angka atau 'exit'."<<endl;
            continue;
        }

        for (int i = 0; i < jumlah; ++i) {
            cout<<"Program C++"<<endl;
        }
    }

    cout<<"Program selesai."<<endl;
    return 0;
}
