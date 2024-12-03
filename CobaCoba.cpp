#include <iostream>
#include <string>
using namespace std;

// Maksimal jumlah barang yang bisa disimpan
const int MAX_BARANG = 100;

// Struktur data untuk menyimpan informasi barang
struct Barang {
    string namaBarang;
    int stok;
};

Barang inventaris[MAX_BARANG];

int jumlahBarang = 0;

void tambahBarang() {
    system("cls");
    if (jumlahBarang >= MAX_BARANG) {
        cout << "Inventaris sudah penuh!\n";
        return;
    }

    string namaBarang;
    int stok;

    cout << "Masukkan nama barang: ";
    cin.ignore(); 
    getline(cin, namaBarang);
    cout << "Masukkan jumlah stok untuk " << namaBarang << ": ";
    cin >> stok;

    for (int i = 0; i < jumlahBarang; ++i) {
        if (inventaris[i].namaBarang == namaBarang) {
            cout << "Barang '" << namaBarang << "' sudah ada di inventaris.\n";
            return;
        }
    }

    inventaris[jumlahBarang].namaBarang = namaBarang;
    inventaris[jumlahBarang].stok = stok;
    jumlahBarang++;
    cout << "Barang '" << namaBarang << "' berhasil ditambahkan dengan stok " << stok << ".\n";
}


void tampilkanInventaris() {
    system("cls");
    if (jumlahBarang == 0) {
        cout << "Inventaris kosong." << endl;
        return;
    }

    cout << " Daftar Barang Inventaris: " << endl;
    for (int i = 0; i < jumlahBarang; ++i) {
        cout << i + 1 << ". " << inventaris[i].namaBarang << " - Stok: " << inventaris[i].stok << endl;
    }
}

void perbaruiStok() {
    system("cls");
    string namaBarang;
    cout << "Masukkan nama barang yang ingin diperbarui stoknya: ";
    cin.ignore(); 
    getline(cin, namaBarang);

    bool ditemukan = false;
    for (int i = 0; i < jumlahBarang; ++i) {
        if (inventaris[i].namaBarang == namaBarang) {
            ditemukan = true;
            int stokBaru;
            cout << "Masukkan stok baru untuk '" << namaBarang << "': ";
            cin >> stokBaru;
            inventaris[i].stok = stokBaru;
            cout << "Stok '" << namaBarang << "' berhasil diperbarui menjadi " << stokBaru << ".\n";
            break;
        }
    }

    if (!ditemukan) {
        cout << "Barang '" << namaBarang << "' tidak ditemukan dalam inventaris.\n";
    }
}

int main() {
    int pilihan;

    while (true) {
        cout << "\nMenu Inventaris Barang :\n";
        cout << "1. Tambah Barang\n";
        cout << "2. Tampilkan Daftar Barang\n";
        cout << "3. Perbarui Stok Barang\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1/2/3/4): ";
        cin >> pilihan;

        switch (pilihan) {
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
                cout << "Terima kasih, program selesai.\n";
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}


