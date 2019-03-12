/*
Nama Program    : nilaimaks.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 6 Maret 2019
Deskripsi       :
*/

#include <iostream>

using namespace std;

typedef int angka[100];

int main(){
    int n, maks;
    angka x;
    cout<<"Masukkan banyaknya angka: ";cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Masukkan angka ke-"<<i+1<<": ";cin>>x[i];
    }

    maks=0;
    for(int i=0;i<n;i++){
        if(x[i]>maks)
            maks=x[i];
    }

    cout<<"\nNilai maksimal adalah: "<<maks<<endl;
}
