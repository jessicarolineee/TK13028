#include <iostream>

using namespace std;

int main() {
    int jumlahSiswa;
    // Variabel untuk menghitung jumlah siswa di setiap kategori
    int lulus = 0, tesPerbaikan = 0, tidakLulus = 0;
    int nilai;

    cout<<"Masukkan jumlah siswa: ";
    cin>>jumlahSiswa;
    
    for (int i = 0; i < jumlahSiswa; ++i) {
        cout<<"Masukkan nilai akhir siswa ke-"<<(i + 1)<<": ";
        cin>>nilai;

        if (nilai >= 70) {
            cout<<"Keterangan: LULUS"<<endl;
            ++lulus;
        } else if (nilai >= 50) {
            cout<<"Keterangan: TES PERBAIKAN"<<endl;
            ++tesPerbaikan;
        } else {
            cout<<"Keterangan: TIDAK LULUS"<<endl;
            ++tidakLulus;
        }
    }

    cout<<"\nStatistik Kelulusan:" << std::endl;
    cout<<"Jumlah siswa lulus: " << lulus << std::endl;
    cout<<"Jumlah siswa tes perbaikan: " << tesPerbaikan << std::endl;
    cout<<"Jumlah siswa tidak lulus: " << tidakLulus << std::endl;

    return 0;
}
