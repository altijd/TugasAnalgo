/*
Nama Program    : binarysearch.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 12 Maret 2019
Deskripsi       :
*/

#include <iostream>

using namespace std;

int main(){
    int n,i,data[100],cari,mid,first,last;
    bool found=false;

    cout<<"Masukkan banyak data: ";cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";cin>>data[i];
    }

    cout<<"Masukkan data yang ingin dicari: ";cin>>cari;

    first=0;
    last=n;

    if(data[first]>data[last])
        cout<<"Data tidak ditemukan karena tidak terurut";

    while(!found && first<=last){
        mid=(first+last)/2;

        if(data[mid]==cari){
            found=true;
            break;
        }
        else if(data[mid]<cari)
            first=mid+1;
        else
            last=mid-1;
    }

    if(!found)
        cout<<"Data tidak ditemukan.";
    else
        cout<<"Data telah ditemukan pada urutan ke-"<<mid+1;
    return 0;
}
