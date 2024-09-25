#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char denahTempatDuduk [16] [7];

    string kelasKursi;
    int barisKursi;
    char kolomKursi;
    string tambahKursi;

    for (int i = 0; i <= 16; i++) {
        for ( int j = 0; j <= 7; j++) {
            denahTempatDuduk [i] [j] = '*';
        }
    }

    while(true) {

        cout << "         ||" ;

        for (int i = 0; i < 7; i++) {
            
            printf ("%c || ", i + 65);
        }
        puts ("");

        for (int i = 1; i <= 15; i++) {
            
            printf ("Baris %2d ||", i);

            for ( int j = 0; j < 7; j++) {
                printf ("%c || ", denahTempatDuduk [i] [j]);
            }
        
            puts ("");
        }

        cout << "Welcome to Untar Airlines !! " << endl;
        cout << "Silahkan pilih kelas tempat duduk Anda ! " << endl;
        cout << "Apakah utama / bisnis / ekonomi ? ";
        cin >> kelasKursi;

        cout << "Masukkan baris tempat duduk yang Anda mau (1&2 = utama, 3-5 = bisnis, 6-15 = ekonomi) : ";
        cin >> barisKursi;

        cout << "Masukkan kolom tempat duduk yang Anda mau (A - G) : ";
        cin >> kolomKursi;

        if (kelasKursi == "utama" && barisKursi > 2 ) {
            cout << "Tempat baris yang Anda pilih tidak valid dengan kelasnya. Silahkan masukkan ulang." << endl;

        }
        else if (kelasKursi == "bisnis" && (barisKursi > 5 || barisKursi < 3)) {
            cout << "Tempat baris yang Anda pilih tidak valid dengan kelasnya. Silahkan masukkan ulang." << endl;

        }
        else if (kelasKursi == "ekonomi" && (barisKursi > 15 || barisKursi < 6)) {
            cout << "Tempat baris yang Anda pilih tidak valid dengan kelasnya. Silahkan masukkan ulang." << endl;

        }
        else {
            denahTempatDuduk [barisKursi] [kolomKursi - 65] = 'X';
            
        }
        
        cout << "         ||" ;

        for (int i = 0; i < 7; i++) {
            
            printf ("%c || ", i + 65);
        }
        puts ("");

        for (int i = 1; i <= 15; i++) {
            
            printf ("Baris %2d ||", i);

            for ( int j = 0; j < 7; j++) {
                printf ("%c || ", denahTempatDuduk [i] [j]);
            }
            
            puts ("");
        }

        cout << "Apakah Anda mau booking Kursi lagi ? (ya/tidak) ";
        cin >> tambahKursi;

        if (tambahKursi == "tidak") {
            cout << "Terima kasih Anda telah berhasil booking kursi di Untar Airlines !!" ;
            
            break;
        }
    }

    return 0 ;
} 