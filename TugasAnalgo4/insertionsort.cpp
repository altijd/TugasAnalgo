/*
Nama Program    : insertionsort.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 12 Maret 2019
Deskripsi       :
*/

#include <iostream>

using namespace std;

int main(){
    int n,data[100],j,temp;

    cout<<"Masukkan banyak data yang akan dimasukkan: ";cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";cin>>data[i];
    }

    for(int i=1;i<=n;i++){
        temp=data[i];
        j=i-1;
        while(data[j]>temp && j>=0){
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=temp;
    }

    cout<<"\nData setelah sorting: ";
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    return 0;
}
