/*
Nama Program    : selectionsort.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 12 Maret 2019
Deskripsi       :
*/

#include <iostream>

using namespace std;

int data[100],data2[100];
int n;

void tukar(int a, int b){
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void selection_sort(){
    int pos,i,j;
    for(i=1;i<=n-1;i++)
    {
        pos = i;
        for(j = i+1;j<=n;j++)
        {
           if(data[j] < data[pos]) pos = j;
        }
        if(pos != i)
            tukar(pos,i);
    }
}

int main(){
    cout<<"Masukkan banyak data: ";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Masukkan data ke-"<<i<<": ";
        cin>>data[i];
        data2[i]=data[i];
    }

    selection_sort();
    cout<<"\nData setelah sorting: ";
    for(int i=1; i<=n; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
