#include <iostream>
#define PI 3.14
using namespace std;

void luaspersegipanjang(){
    int panjang, lebar,hasil;

    cout << " ========== Luas Pesegi Panjang ========== "  << endl;
    cout << " Masukkan panjang persegi panjang : ";
    cin >> panjang;
    cout << " Masukkan lebar persegi panjang : ";
    cin >> lebar;
 
    hasil = panjang * lebar;
    cout << " Luas persegi panjang adalah " <<  hasil << " m "  << endl;
}
void volumebalok(){
    double panjang, lebar, tinggi, hasil;

    cout << " ========== Volume Balok ========== "  << endl;
    cout << " Masukkan panjang balok : ";
    cin >> panjang;
    cout << " Masukkan lebar balok : ";
    cin >> lebar;
    cout << " Masukkan tinggi balok : ";
    cin >> tinggi;

    hasil = panjang * lebar * tinggi;
    cout << " Volume balok adalah " << hasil << " m " << endl;
}
void luaslingkaran(){
    int jariJari,hasil;

    cout << " ========== Luas Lingkaran ========== "  << endl;
    cout << " Masukkan jari-jari lingkaran : ";
    cin >> jariJari;

    hasil = PI * jariJari * jariJari;
    cout << " Luas lingkaran adalah " << hasil << " m^2 " << endl;

}
void volumetabung(){
    double jariJari, tinggi, hasil;
   
    cout << " ========== Volume Tabung ========== "  << endl;
    cout << " Masukkan jari-jari tabung : ";
    cin >> jariJari;
    cout << " Masukkan tinggi tabung : ";
    cin >> tinggi;

    hasil = PI * jariJari * jariJari * tinggi;
    cout << " Volume tabung adalah " << hasil << " m^2 " << endl;
}

int main(){
    char ulang;
    int menu;
    do{ 
        cout << " ========== MENU ========== " << endl;
        cout << " 1. Luas Persegi Panjang  " << endl;
        cout << " 2. Volume Balok " << endl;
        cout << " 3. Luas Lingkaran " << endl;
        cout << " 4. Volume Tabung " << endl;
        cout << " 5. Keluar " << endl;
        cout << " Pilih Menu : " ;
        cin >> menu;

        switch(menu){
        case 1:
           luaspersegipanjang();
           break;

        case 2:
           volumebalok();
           break;

         case 3:
           luaslingkaran();
           break;

        case 4:
           volumetabung();
           break; 
         case 5:
            cout << " Keluar dari program." << endl;
            break;

        default:
           cout << " Pilihan tidak valid. Coba lagi." << endl;;
           break; 
        }       
        cout << " Mau Ngulang kah dek ? : " ;
        cin >> ulang;
        system("cls");

    }while(menu != 5 || ulang == 'y' || ulang =='Y');
    

}
