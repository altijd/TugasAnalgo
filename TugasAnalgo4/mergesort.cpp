/*
Nama Program    : mergesort.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 20 Maret 2019
Deskripsi       :
*/

#include <iostream>
#include <chrono>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
using namespace std::chrono;

typedef int angka[100];

void banyak_data(int& n){
    cout<<"Masukkan banyak data: ";cin>>n;
}

void input_data(int n,angka x){
    for(int i=0;i<n;i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";cin>>x[i];
    }
}

void Merge(angka x, int low, int high, int mid){
	int i,j,k,temp[high-low+1];

	i = low;
	k = 0;
	j = mid + 1;

	while (i<=mid && j<=high){
		if (x[i]<x[j]){
			temp[k]=x[i];
			k++;
			i++;
		}
		else{
			temp[k]=x[j];
			k++;
			j++;
		}
	}

	while (i<=mid){
		temp[k]=x[i];
		k++;
		i++;
	}

	while (j<=high){
		temp[k]=x[j];
		k++;
		j++;
	}

	for (i=low; i<=high; i++){
		x[i]=temp[i-low];
	}
}

void MergeSort(angka& x, int low, int high){
	int mid;
	if (low < high){
		mid=(low+high)/2;

		MergeSort(x, low, mid);
		MergeSort(x, mid+1, high);

		Merge(x, low, high, mid);
	}
}

void print_sorted(angka x,int n){
    cout<<"\nSorted data: ";
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
}

int main(){
    int n;
    angka x;

    banyak_data(n);
    input_data(n,x);

    auto start = high_resolution_clock::now();
    MergeSort(x,0,n-1);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop-start);


    print_sorted(x,n);

    cout<<"\n\nRuntime: "<<duration.count()<<" microseconds"<<endl;
    return 0;
}
