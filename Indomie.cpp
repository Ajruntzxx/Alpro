#include <iostream>
using namespace std;

int main()
{
    char kondisi;
    do
    {
        system("cls");
        int jum;
        string rasa;
        char menu;
        cout << "Pilih Menu" << endl;
        cout << "1. Indomie" << endl;
        cout << "Pilih Menu : ";
        cin >> menu;

        system("cls");
        switch (menu)
        {
        case '1':
            cout << " Indomie " << endl;
            cout << "Masukkan jumlah : ";
            cin >> jum;
            cout << endl; 
            for(int i = 0; i < jum; i++){
                cout << "Masukkan Varian Rasa : ";
                cin >> rasa;
                cout << "Indomie ke-" << i+1 << " Dengan Varian Rasa "<< rasa << endl;
                cout << endl;
              

            }
            break;
        }
    cout << "Apakah anda ingin kembali?(y/n)";
     cin >> kondisi;
    }while (kondisi == 'y' || kondisi == 'Y');
}           