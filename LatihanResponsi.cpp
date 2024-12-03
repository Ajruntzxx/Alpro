#include <iostream>
using namespace std;

int a = 0;
string mahasiswa[100][2];


void tambah() {
    string nama, nilai;
    bool masuk = true;
    cin.ignore();
    cout << "Tambah Data" << endl;
    cout << "Nama Mahasiswa : ";
    getline(cin, nama);
    cout << "Nilai : ";
    getline(cin, nilai);

    for (int i = 0; i < a; i++) {
        if (nama == mahasiswa[i][0]) {
            cout << "Mahasiswa sudah ada" << endl;
            masuk = false;
            break;
        }
    }

    if (masuk) {
        mahasiswa[a][0] = nama;
        mahasiswa[a][1] = nilai;
        a++;
    }
}

void cari(){
    string cari;
    bool dapat = false;
    cin.ignore();
    cout << "Masukkan nama yang ingin dicari : ";
    getline(cin, cari);
    system("cls");
    for(int i = 0; i < a; i++ ){
        if(cari == mahasiswa[i][0]){
            cout << "DATA DITEMUKAN!!!" << endl;
            cout << "Nama : " << mahasiswa[i][0] << endl;
            cout << "Nilai: " << mahasiswa[i][1] << endl;
            dapat = true;
        }
    }

    if(!dapat){
        cout << "DATA TIDAK DITEMUKAN!!!" << endl;
    }
}

void lihat() {
    
    cout << "Daftar Mahasiswa" << endl;
    for (int i = 0; i < a; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << mahasiswa[i][0] << endl;
        cout << "Nilai : " << mahasiswa[i][1] << endl;
        cout << endl;
    }
}

int main() {
    bool ulang = false;
    char kembali;
    int pilih;
    do {
        system("cls");
        cout << "DAFTAR MENU" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Lihat Data" << endl;
        cout << "3. Cari Data" << endl;
        cout << "Pilih Menu : ";
        cin >> pilih;

        system("cls");
        switch (pilih) {
        case 1:
            tambah();
            break;
        case 2:
            lihat();
            break;

        case 3: 
            cari();
            break;

        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }
        cout << "Apakah anda ingin mengulang(Y/N) ? ";
        cin >> kembali;
        ulang = (kembali == 'Y' || kembali == 'y');
    } while (ulang);

    return 0;
}