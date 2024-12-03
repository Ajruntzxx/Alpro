 #include <iostream>
using namespace std;
    
int main(){
    system("cls");
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