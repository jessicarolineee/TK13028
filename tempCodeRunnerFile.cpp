#include<iostream>

using namespace std;

int N;
int Fakt = 1;
int Pengali;

int main (){
    cout << "Masukkan nilai N :";
    cin >> N;

    Pengali = N;

    while (Pengali >= 1){
        Fakt = Fakt * Pengali;

        Pengali = Pengali - 1;
    }
    cout << "Faktorial dari " << N << " adalah " << Fakt << endl;
}