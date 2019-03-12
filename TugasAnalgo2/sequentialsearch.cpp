/*
Nama Program    : sequentialsearch.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 6 Maret 2019
Deskripsi       :
*/

#include <iostream>

using namespace std;

int main(){
    int n,data[100],cari,index,result;
    bool ketemu=false;

    cout<<"Masukkan banyak data: ";cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";cin>>data[i];
    }

    cout<<"\nMasukkan data yang akan dicari: ";cin>>cari;

    for(int i=0;i<n;i++){
        if(data[i]==cari){
            ketemu=true;
            index=i;
            i=n;
        }
    }

    if(ketemu==true){
        cout<<"\nData telah ditemukan pada urutan ke-"<<index+1<<endl;
    }
    else
        cout<<"\nData tidak ditemukan."<<endl;
    return 0;
}
