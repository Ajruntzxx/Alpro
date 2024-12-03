#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial dari suatu bilangan
int faktorial(int n) {
    int hasil = 1; // Variabel hasil untuk menyimpan nilai faktorial
    // Tahap 1: Menghitung faktorial n (n!)
    for (int i = 1; i <= n; i++) {
        hasil *= i; // Mengalikan hasil dengan nilai i yang terus bertambah hingga n
    }
    return hasil; // Mengembalikan hasil akhir faktorial
}

// Fungsi untuk menghitung permutasi
// Rumus permutasi: P(n, r) = n! / (n - r)!
int hitungPermutasi(int n, int r) {
    // Memeriksa apakah nilai r lebih besar dari n
    // Jika iya, maka permutasi tidak valid
    if (r > n) {
        cout << "Nilai r tidak boleh lebih besar dari n!" << endl;
        return -1; // Mengembalikan -1 untuk menandakan error
    }

    // Tahap 2: Menggunakan rumus permutasi P(n, r) = n! / (n - r)!
    int permutasi = faktorial(n) / faktorial(n - r);
    return permutasi; // Mengembalikan hasil permutasi
}

// Fungsi untuk menghitung kombinasi
// Rumus kombinasi: C(n, r) = n! / (r! * (n - r)!)
int hitungKombinasi(int n, int r) {
    // Memeriksa apakah nilai r lebih besar dari n
    // Jika iya, maka kombinasi tidak valid
    if (r > n) {
        cout << "Nilai r tidak boleh lebih besar dari n!" << endl;
        return -1; // Mengembalikan -1 untuk menandakan error
    }

    // Tahap 3: Menggunakan rumus kombinasi C(n, r) = n! / (r! * (n - r)!)
    int kombinasi = faktorial(n) / (faktorial(r) * faktorial(n - r));
    return kombinasi; // Mengembalikan hasil kombinasi
}

int main() {
    int n, r; // Deklarasi variabel untuk nilai n dan r

    // Input nilai n dan r dari pengguna
    cout << "Masukkan nilai n (jumlah total elemen): ";
    cin >> n;
    cout << "Masukkan nilai r (jumlah elemen yang diambil): ";
    cin >> r;

    // Tahap 4: Menghitung dan menampilkan hasil permutasi
    int hasilPermutasi = hitungPermutasi(n, r);
    if (hasilPermutasi != -1) { // Memastikan tidak ada error
        cout << "Permutasi P(" << n << ", " << r << ") = " << hasilPermutasi << endl;
    }

    // Tahap 5: Menghitung dan menampilkan hasil kombinasi
    int hasilKombinasi = hitungKombinasi(n, r);
    if (hasilKombinasi != -1) { // Memastikan tidak ada error
        cout << "Kombinasi C(" << n << ", " << r << ") = " << hasilKombinasi << endl;
    }

    return 0; // Mengakhiri program
}
