#include <iostream>

using namespace std;

// fungsi
int kali(int a, int b){
    int c;
    c = a * b;
    return c;
}
int bagi(int a, int b){
    int c;
    c = a / b;
    return c;
}
int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}
int kurang(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int modul(int a, int b){
    int c;
    c = a % b;
    return c;
}

int main()
{
    char ulang;
    do
    {
        int masukan,hasil,a,b;
        cout << "# Begus Ibrahim | FullStack Developer #" << endl;
        cout << "========== APLIKASI KALKULATOR ==========" << endl;
        cout << "1. Perkalian" << endl;
        cout << "2. Pembagian" << endl;
        cout << "3. Pertambahan" << endl;
        cout << "4. Pengurangan" << endl;
        cout << "5. Modulus" << endl;
        cout << "Pilih fungsi yang mana (1/2/3/4/5) : ";
        cin >> masukan;

        if(masukan == 1){
            cout << "* Perkalian *" << endl;
            cout << "Masukan angka ke-1 = ";
            cin >> a;
            cout << "Masukan angka ke-2 = ";
            cin >> b;

            hasil = kali(a,b);
            cout << "Hasil dari " << a << " x " << b << " = " << hasil << endl;
        }else if(masukan == 2){
            cout << "/ Pembagian /" << endl;
            cout << "Masukan angka ke-1 = ";
            cin >> a;
            cout << "Masukan angka ke-2 = ";
            cin >> b;

            hasil = bagi(a,b);
            cout << "Hasil dari " << a << " / " << b << " = " << hasil << endl;
        }else if(masukan == 3){
            cout << "+ Pertambahan + " << endl;
            cout << "Masukan angka ke-1 = ";
            cin >> a;
            cout << "Masukan angka ke-2 = ";
            cin >> b;

            hasil = tambah(a,b);
            cout << "Hasil dari " << a << " + " << b << " = " << hasil << endl;
        }else if(masukan == 4){
            cout << "- Pengurangan -" << endl;
            cout << "Masukan angka ke-1 = ";
            cin >> a;
            cout << "Masukan angka ke-2 = ";
            cin >> b;

            hasil = kurang(a,b);
            cout << "Hasil dari " << a << " - " << b << " = " << hasil << endl;
        }else if(masukan == 5){
            cout << "% Modulus %" << endl;
            cout << "Masukan angka ke-1 = ";
            cin >> a;
            cout << "Masukan angka ke-2 = ";
            cin >> b;

            hasil = modul(a,b);
            cout << "Hasil dari " << a << " % " << b << " = " << hasil << endl;
        }
        else{
            cout << "=======================================" << endl;
            cout << "WARNING :: TIDAK ADA PILIHAN YANG TEPAT" << endl;
            cout << "=======================================" << endl;
        }
        cout << "Mau mengulang program kembali (y/n) : ";
        cin >> ulang;
    }while(ulang == 'Y' || ulang == 'y');




    cin.get();
    return 0;
}

