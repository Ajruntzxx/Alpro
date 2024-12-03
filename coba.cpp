#include<iostream>
using namespace std;
int main(){
int tahun;
cout <<"Masukan tahun :";
cin >> tahun;
if (tahun % 400 == 0 || tahun % 4 == 0){
cout << tahun << " adalah tahun kabisat";
}else{
cout << tahun << " bukan tahun kabisat";
}
}
