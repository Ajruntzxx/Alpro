#include <iostream>
using namespace std;

string nama[5];

int main(){
    string nama;
    
   cout << "Masukkan nama ke-2 : ";
    cin >> nama[1];
    cout << "Masukkan nama ke-3 : ";
    cin >> nama[2];
    cout << "Masukkan nama ke-1 : ";
    cin >> nama[0];
    cout << "Masukkan nama ke-4 :  ";
    cin >> nama[3];
    cout << "Masukkan nama ke-5 :";
    cin >> nama[4];
   
   cout << "Nama ke-1 :" << nama[0] << endl;
   cout << "Nama ke-2 :" << nama[1] << endl;
   cout << "Nama ke-3 :" << nama[2] << endl;
   cout << "Nama ke-4 :" << nama[3] << endl;
   cout << "Nama ke-5 :" << nama[4] << endl;
}
    
   /*  }
    int index;
    cout << "Masukkan index : ";
    cin >> index;//2

    cout << "Nama dari index ke-" << index << " adalah " << nama[index];
    string nama[5] = {"Bintoro", "Bagas", "Soekarno", "Soeharto", "Soeharto"};
    string nama2;
    cout << "Masukkan Nama yang ingin anda cari : ";
    cin >> nama2;
    for (int i = 0; i < 5; i++)
    {
        //Soeharto
        if (nama2 == nama[i])
        {
         cout << "nama ada" << endl;
        }
        
    }

    
    string nama;
    cout << "Masukkan nama : ";
    getline(cin, nama);
    cout << nama[3];
    
    int jum;
    cout << "Masukkan berapa jumlah array : ";
    cin >> jum;
    
    string nama[jum];
    for (int i = 0; i < jum; i++)
    {
        cout << "Masukkan nama ke-" << i+1 << " : " ;
        cin >> nama[i];
    } */

    /* int angka[2][3];

    for (int i = 0; i < 2; i++)
    { //0
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan angka untuk indeks baris ke-" << i << " dan indeks kolom ke-" << j << " : ";
            cin >> angka[i][j];
        }
        
    }
    

} */