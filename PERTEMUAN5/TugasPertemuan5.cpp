#include<iostream>
#include<string.h>

using namespace std;

string inputKalimat(){
    string kalimat;
    int spaceCount;

    do{
        cout << "Masukkan kalimat (lebih dari 3 kata) : ";
        getline(cin,kalimat);

        char karakter[kalimat.length()];

        cout << "Panjang karakter : " << kalimat.length() << endl;

        strcpy(karakter,kalimat.c_str());

        for (int i = 0; i < kalimat.length(); i++){
            if(karakter[i] == ' '){
                spaceCount++;
            }
        }

    } while (spaceCount < 2);

    return kalimat;
}

char inputChar() {
    char huruf;

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;
    
    return huruf;
}

int menghitungChar(string kalimat, char huruf) {
    int sum = 0;
    for(char c : kalimat) {
        if ((char)tolower(c) == (char)tolower(huruf)) {
            sum = sum + 1;
        }
    }
    return sum;
}

int main(){
    string kalimat = inputKalimat();
    char karakter = inputChar();

    int jumlah = menghitungChar(kalimat, karakter);

    cout << "Karakter '" << karakter << "' muncul sebanyak " << jumlah << " kali dalam kalimat." << endl;
}