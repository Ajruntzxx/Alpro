#include <iostream>
using namespace std;
void deretfaktorial(int x){
   for (int i =1; i<=x; ){
    
    cout<<" "<< x ;
    if (i<x){
        cout<<" X";
    }
    x--;

   }
}
void soalkombinasi(int n, int r){
    cout<<"Sebuah kelas memiliki "<< n <<" siswa."<<endl;
    cout<<"Guru ingin memilih "<< r << " siswa untuk mewakili kelas dalam lomba cerdas cermat."<<endl;
    cout<<"Berapa banyak cara guru dapat memilih tim tersebut dengan tanpa  memperhatikan urutan?"<<endl;
}
void soalpermutasi(int n, int r){
    cout<<"Sebuah tim olahraga terdiri dari "<< n <<" pemain berbeda."<<endl;
    cout<<"Berapa banyak cara yang berbeda untuk memilih "<< r <<" dari "<< n <<" pemain tersebut sebagai kapten, wakil kapten, dan asisten kapten tanpa memperhatikan urutan?"<<endl;
}
unsigned long long factorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
    hasil *= i;
    }
    return hasil;
}
unsigned long long kombinasi(int n, int r,int c) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
unsigned long long permutasi(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r,pilih,c,p,k;
    char akhir;
    do{
    system ("cls");
    cout << "====================="<<endl;
    cout << " Daftar Pilihan    :  "<<endl;
    cout << "====================="<<endl;
    cout << " 1. Kombinasi   ";
    cout << "\n 2. Permutasi       ";
    cout << "\n 3. Exit            ";
    cout << "\n====================="<<endl;
    cout <<endl;
    cout << "Masukan Pilihan Yang Ingin Anda Selesaikan : ";
    cin >> pilih;
    switch(pilih){
        case 1:
        system("cls");
           
            cout<<"================================================================="<<endl;
            cout<<"                     Pengertian Kombinasi  "<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Kombinasi adalah cara memilih objek dari sejumlah objek\n";
            cout<< "tanpa memperhatikan urutan. Kombinasi dihitung menggunakan\n";
            cout<< "rumus: C(n, r) = n! / (r! * (n - r)!)\n" << endl;
            cout<<endl;
            system("pause");
            system("cls");
            cout<<"================================================================="<<endl;
            cout<<"                     Deskripsi Rumus Kombinasi   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<"C(n, r) = n! / (r! * (n - r)!) "<<endl;
            cout<<endl;
            cout<<"C = Kombanasi (Lambang dari kombinasi) "<<endl;
            cout<<"n = Total jumlah objek yang tersedia untuk dipilih"<<endl;
            cout<<"r = Total objek yang dipilih"<<endl;
            cout<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Lanjutkan Untuk Menghitung Kombinasi"<<endl;
            system("pause");
            system("cls");
            do{
            // system ("cls");
            cout<<"================================================================="<<endl;
            cout<<"                     Penyelesaian Soal Kombinasi   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Masukan Banyak Pilihan (n) \t: ";
            cin>>n;
            cout<<"Masukan Banyak Yang Dipilih (r) \t: ";
            cin>>r;
            if(n<=r){
                cout<<endl;
                cout<<"Nilai 'N' harus lebih besar dari Nilai 'R' "<<endl;
                cout<<"Silahkan Input Kembali Nilai 'N' Dan 'R' "<<endl<<endl;
            }else{
                cout<<endl;
                cout<<"Berikut Contoh soal berdasarkan nilai N dan R yang di inputkan : "<<endl;
                cout<<endl;
                soalkombinasi(n,r);
            
            cout<<endl;
            cout<<"Jawabannya Adalah : "<<kombinasi(n, r,c)<< " Pilihan"<<endl;
            cout<<endl;
            }
            
            }while(n<=r);

            system("cls");
            cout<<endl;
            cout<<"Berikut Langkah Penyelesaian Dari Soal Di Atas : "<<endl;
            cout<<endl;
            cout<<endl;
            soalkombinasi(n,r);
            system("pause");
            cout<<endl;
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Pertama   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Identifikasi nilai N dan nilai R pada soal : "<<endl;
            cout<<"- Banyak Siswa (n) \t\t= "<<n<<endl;
            cout<<"- Banyak Siswa yang Dipilih (r) = "<<r<<endl;
            cout<<endl;
            system("pause");
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Kedua   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Masukan Nilai N dan Nilai R pada Rumus : "<<endl;
            cout<<"Rumus Permutasi Adalah P(n,r)= "<<endl;
            cout<<endl;
            cout<<"           n!            "<<endl;
            cout<<"-------------------------"<<endl;
            cout<<"         r!(n-r)!          "<<endl;
            cout<<endl;
            cout<<"Tuliskan Ulang Rumus dengan memasukan nilai N dan nilai R : "<<endl;
            cout<<endl;
            cout<<"           "<<n<<"!"<<"            "<<endl;
            cout<<"-------------------------"<<endl;
            cout<<"          "<<r<<"!"<<"("<<n<<"-"<<r<<")!          "<<endl;
            cout<<endl;
            system("pause");
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Ketiga   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Hitung Faktorial : "<<endl;
            cout<<n<<"! \t= ";
            deretfaktorial(n);
            cout<<" \t= "<<factorial(n);
            k = n-r;
            cout<<endl;

            cout<<r<<"! \t= ";
            deretfaktorial(r);
            cout<<" \t\t= "<<factorial(r);

            
            cout<<endl;

            cout<<"("<<n<<"-"<<r<<")! \t= ";
            deretfaktorial(k);
            cout<<" \t\t= "<<factorial(k);
            cout<<endl;
            system ("pause");
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Terakhir   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Masukan kembali nilai N dan R pada rumus : "<<endl;
            cout<<endl;
            cout<<factorial(n);
            cout<<endl;
            cout<<"----- = "<<kombinasi(n, r,k)<<endl;
            cout<<factorial(r)<<"("<<factorial(k)<<") "<<endl;

            cout<<endl;

            
            break;

            case 2:
            system ("cls");
            cout<<endl;
            cout<<endl;
            cout<<"================================================================="<<endl;
            cout<<"                     Pengertian Permutasi  "<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Permutasi adalah cara memilih objek dari sejumlah objek dengan memperhatikan urutan\n";
            cout<< "Permutasi dihitung menggunakan\n";
            cout<< "rumus: P(n, r) = n! / (n - r)!\n" << endl;
            cout<<endl;
            system("pause");
            system("cls");
        
            cout<<"================================================================="<<endl;
            cout<<"                     Deskripsi Rumus Permutasi   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"P(n, r) = n! / (n - r)! "<<endl;
            cout<<endl;
            cout<<"P= permutasi (Lambang dari Permutasi) "<<endl;
            cout<<"n= Total jumlah objek yang tersedia untuk dipilih"<<endl;
            cout<<"r= Total objek yang dipilih"<<endl;
            cout<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Lanjutkan Untuk Menghitung Permutasi"<<endl;
            system("pause");
            system("cls");
            do{
            // system ("cls");
            cout<<"================================================================="<<endl;
            cout<<"                     Penyelesaian Soal Permutasi   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Masukan Banyak Pilihan (n) \t: ";
            cin>>n;
            cout<<"Masukan Banyak Yang Dipilih (r) \t: ";
            cin>>r;
            if(n<=r){
                cout<<endl;
                cout<<"Nilai 'N' harus lebih besar dari Nilai 'R' "<<endl;
                cout<<"Silahkan Input Kembali Nilai 'N' Dan 'R' "<<endl<<endl;
            }else{
            cout<<endl;
            cout<<"Berikut Contoh soal berdasarkan nilai N dan R yang di inputkan : "<<endl;
            cout<<endl;
            soalpermutasi(n,r);
            
            cout<<endl;
            cout<<"Jawabannya Adalah : "<<permutasi(n, r)<< " Pilihan"<<endl;
            cout<<endl;
            }
            
            }while(n<=r);

           system("cls");
            cout<<endl;
            cout<<"Berikut Langkah Penyelesaian Dari Soal Di Atas : "<<endl;
            cout<<endl;
            cout<<endl;
            soalpermutasi(n,r);
            system("pause");
            cout<<endl;
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Pertama   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Identifikasi nilai N dan nilai R pada soal : "<<endl;
            cout<<"- Total Pemain (n) ="<<n<<endl;
            cout<<"- Banyak Pemain Yang Bakalan dipilih (r) ="<<r<<endl;
            cout<<endl;
            system("pause");
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Kedua   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Masukan Nilai N dan Nilai R pada Rumus : "<<endl;
            cout<<"Rumus Permutasi Adalah P(n,r)= "<<endl;
            cout<<endl;
            cout<<"           n!            "<<endl;
            cout<<"-------------------------"<<endl;
            cout<<"         (n-r)!          "<<endl;
            cout<<endl;
            cout<<"Tuliskan Ulang Rumus dengan memasukan nilai N dan nilai R : "<<endl;
            cout<<endl;
            cout<<"           "<<n<<"!"<<"            "<<endl;
            cout<<"-------------------------"<<endl;
            cout<<"          ("<<n<<"-"<<r<<")!          "<<endl;
            cout<<endl;
            system("pause");
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Ketiga   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Hitung Faktorial : "<<endl;
            cout<<n<<"! \t= ";
            deretfaktorial(n);
            cout<<" \t= "<<factorial(n);
            k = n-r;
            cout<<endl;
            cout<<"("<<n<<"-"<<r<<")! \t= ";
            deretfaktorial(k);
            cout<<" \t= "<<factorial(k);
            cout<<endl;
            system ("pause");
            cout<<"================================================================="<<endl;
            cout<<"                     Langkah Terakhir   "<<endl;
            cout<<"================================================================="<<endl;
            cout<<endl;
            cout<<"Masukan kembali nilai N dan R pada rumus : "<<endl;
            cout<<endl;
            cout<<factorial(n);
            cout<<endl;
            cout<<"----- = "<<permutasi(n, r)<<endl;
            cout<<factorial(k);
            cout<<endl;


            break;
            default:
            cout<<"Inputan Tidak Tersedia"<<endl;
            }

            cout<<"Apakah anda ingin kembali ke menu utama (y/n) : ";
            cin>>akhir;
        }while(akhir == 'y' || akhir == 'Y');
        cout<<endl;
        cout<<"Terima Kasih"<<endl;
}