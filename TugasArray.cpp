#include <iostream>
using namespace std;

string inventaris[100][2];

int a = 0;

void tambahBarang() {
    system("cls");
    if (a >= 100) {
        cout << "Inventaris sudah penuh!" << endl;
        return;
    }

    string namaBarang,stok;
    
    cout << "========== TAMBAH DATA ==========" << endl;
    cout << "Masukkan nama barang: ";
    cin.ignore(); 
    getline(cin, namaBarang);
    cout << "Masukkan jumlah stok untuk " << namaBarang << ": ";
    cin >> stok;

    for (int i = 0; i < a; i++) {
        if (inventaris[i][0] == namaBarang) {
            cout << "Barang '" << namaBarang << "' sudah ada di inventaris." << endl;
            return;
        }
    }

    inventaris[a][0] = namaBarang;
    inventaris[a][1] = stok;
    a++;
    cout << "Barang '" << namaBarang << "' berhasil ditambahkan dengan stok " << stok << "." << endl;
}

void tampilkanInventaris() {
    system("cls");
    if (a == 0) {
        cout << "Inventaris kosong." << endl;
        return;
    }

    cout << " ========== DAFTAR BARANG INVENTARIS ========== " << endl;
    for (int i = 0; i < a; i++) {
        cout << i+1 << ". ";
        cout << "Nama Barang : " << inventaris[i][0] << endl;
        cout << "   Stok Barang : " << inventaris[i][1] << endl;
        cout << endl;
    }
        
}

void perbaruiStok() {
    system("cls");
    string namaBarang;
    cout << " ========== MEMPERBARUI DATA ========= " << endl;
    cout << "Masukkan nama barang yang ingin diperbarui stoknya: ";
    cin.ignore(); 
    getline(cin, namaBarang);

    bool ditemukan = false;
    for (int i = 0; i < a; ++i) {
        if (inventaris[i][0] == namaBarang) { 
            ditemukan = true;
            int stokBaru;
            cout << "Masukkan stok baru untuk '" << namaBarang << "': ";
            cin >> stokBaru;
            inventaris[i][1] = stokBaru;
            cout << "Stok '" << namaBarang << "' berhasil diperbarui menjadi " << stokBaru << ". " << endl;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Barang '" << namaBarang << "' tidak ditemukan dalam inventaris. "<< endl;
    }
}

int main() {
    int pilihan;
    char ulang;

    do {
        system("cls");
        cout << "========== INVENTARIS HIMATIF=========="<< endl;
        cout << "1. Tambah Barang " << endl ;
        cout << "2. Tampilkan Daftar Barang "<< endl;
        cout << "3. Perbarui Stok Barang "<< endl;
        cout << "4. Keluar " << endl;
        cout << "Pilih menu (1/2/3/4): ";
        cin >> pilihan;

        switch (pilihan) {
            system("cls");
            case 1:
                tambahBarang();
                break;
            case 2:
                tampilkanInventaris();
                break;
            case 3:
                perbaruiStok();
                break;
            case 4: 
                cout << " Terima kasih, program selesai. "<< endl;
                return 0;
            default:
                cout << " Pilihan tidak valid. Silakan coba lagi. "<< endl;
        }
        cout << "Apakah anda ingin mengulang(Y/N) ? ";
        cin >> ulang;
    }while(ulang == 'Y' || ulang == 'y');

    return 0;
}



