#include <iostream>
using namespace std;

int main() {
    string correctUsername = "jessica";
    string correctPassword = "hahaha";
    string username, password ;
    int choice; 
    int num, fact = 1;

    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    if (username != correctUsername || password != correctPassword) {
        cout<<"Username atau password salah!"<<endl;
        return 1; // Exit program
    }

    cout<<" Welcome, "<<username<<"!"<<endl;

    cout<<"Menu:\n1. Faktorial\n2. Penambahan\n3. Rata-rata\n";
    cout<<"Pilih menu (1/2/3): ";
    cin>>choice;

    if (choice == 1) {
        cout<<"Masukkan nilai untuk faktorial: ";
        cin>>num;
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        cout<<"Faktorial dari "<<num<<" adalah "<<fact<<endl;
    } else if (choice == 2) {
        int a, b;
        cout<<"Masukkan dua nilai untuk penambahan: ";
        cin>>a>>b;
        cout<<"Hasil penambahan: "<<(a + b)<<endl;
    } else if (choice == 3) {
        int a, b, c;
        cout<<"Masukkan tiga nilai untuk rata-rata: ";
        cin>>a>>b>>c;
        cout<<"Rata-rata dari nilai-nilai tersebut adalah "<<(a + b + c)/3.0<<endl;
    } else {
        cout<<"Pilihan menu tidak valid!"<<endl;
    }
    
    cout<<"Terima kasih telah menggunakan aplikasi!"<<endl;
    return 0;
}
