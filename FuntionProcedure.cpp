#include <iostream>
using namespace std;

void pertambahan(){
    int bilangan1,bilangan2,hasil;

    cout << " Masukan Bilangan 1 : ";
    cin >> bilangan1;

    cout << " Masukan Bilangan 2 : ";
    cin >> bilangan2;
    
    hasil = bilangan1 + bilangan2;

    cout << " hasilnya adalah " << hasil;

}

void pengurangan(){
    int bilangan1,bilangan2,hasil;

    cout << " Masukan Bilangan 1 : ";
    cin >> bilangan1;

    cout << " Masukan Bilangan 2 : ";
    cin >> bilangan2;
    
    hasil = bilangan1 - bilangan2;

    cout << " hasilnya adalah " << hasil;

}

void perkalian(){
    int bilangan1,bilangan2,hasil;

    cout << " Masukan Bilangan 1 : ";
    cin >> bilangan1;

    cout << " Masukan Bilangan 2 : ";
    cin >> bilangan2;
    
    hasil = bilangan1 * bilangan2;

    cout << " hasilnya adalah " << hasil;

}

void pembagian(){
    int bilangan1,bilangan2,hasil;

    cout << " Masukan Bilangan 1 : ";
    cin >> bilangan1;

    cout << " Masukan Bilangan 2 : ";
    cin >> bilangan2;
    
    hasil = bilangan1 / bilangan2;

    cout << " hasilnya adalah " << hasil;

}

void piramida(){
    int angka;
    cout << " Masukan angka : ";
    cin >> angka;
    for(int i = 1; i <= angka; i++){

        for(int j = angka; j > i; j--){
            cout << " ";
        }

         for(int j = 1; j <= i; j++){
            cout << "* ";
        }   

    cout << endl;    
    }

}
int main(){
    char ulang;
    int menu;
    do{ 
        cout << " 1. Pertambahan " << endl;
        cout << " 2. Pengurangan " << endl;
        cout << " 3. Perkalian" << endl;
        cout << " 4. Pembagian " << endl;
        cout << " 5. Piramida " << endl;
        cout << " Pilih Menu : " ;
        cin >> menu;

        switch(menu){
        case 1:
           pertambahan();
           break;

        case 2:
           pengurangan();
           break;

         case 3:
           perkalian();
           break;

        case 4:
           pembagian();
           break; 

        case 5:
           piramida();
           break; 

        default:
           break; 
        }
        cout << endl;
        cout << " Mau Ngulang kah dek ? : " ;
        cin >> ulang;
        system("cls");

    }while(ulang == 'y' || ulang == 'Y');

}