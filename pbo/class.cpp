#include <iostream>
#include <string.h>
using namespace std;

class mahasiswa{

    private:
        char nama[20];
        char nim[8];
        int umur;

    public:
        void inisialisasi(char *NAMAMHS, char *NIMMHS, int UMURMHS);
        void tampilkan();
};

int main(){

    cout << "========= PROGRAM DATA MAHASISWA =========" << endl;
    char nama[20];
    char nim[8];
    int umur;
    cout << "Masukan nama = ";
    cin >> nama;
    cout << "Masukan nim = ";
    cin >> nim;
    cout << "Masukan umur = ";
    cin >> umur;

    //class
    mahasiswa mhs;
    mhs.inisialisasi(nama,nim,umur);
    mhs.tampilkan();

    cin.get();
    return 0;
}

void mahasiswa::inisialisasi(char *NAMAMHS, char *NIMMHS, int UMURMHS){
    strcpy(nama, NAMAMHS);
    strcpy(nim, NIMMHS);
    umur = UMURMHS;
}

void mahasiswa::tampilkan(){
    cout << endl;
    cout << "----- DATANYA -----" << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nim : " << nim << endl;
    cout << "Umur : " << umur << endl;
}
