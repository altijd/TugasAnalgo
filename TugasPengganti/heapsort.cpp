/*
Nama Program    : heapsort.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    :
Deskripsi       :
*/

#include <stdio.h>
#include <limits.h>
#include <conio.h>
#include <iostream>

using namespace std;

int heap[1000000],UkuranHeap;

void Init(){
    UkuranHeap = 0;
    heap[0] = -INT_MAX;
}

void Insert(int element){
    UkuranHeap++;
    heap[UkuranHeap] = element; /*Sisipkan di tempat terakhir*/
    /*Sesuaikan posisinya*/
    int now = UkuranHeap;
    while(heap[now/2] > element){
            heap[now] = heap[now/2];
            now /= 2;
    }
    heap[now] = element;
}

int DeleteMin(){
    int minElement,lastElement,child,now;
    minElement = heap[1];
    lastElement = heap[UkuranHeap--];

    for(now = 1; now*2 <= UkuranHeap ;now = child){
            child = now*2;
            if(child != UkuranHeap && heap[child+1] < heap[child] ){
                    child++;
            }
            if(lastElement > heap[child])            {
                    heap[now] = heap[child];
            }
            else{
                    break;
            }
    }
    heap[now] = lastElement;
    return minElement;
}

int main(){
    int number_of_elements;
    cout<<"Masukkan banyak elemen: ";cin>>number_of_elements;
    int element;
    Init();
    for(int i=1; i<=number_of_elements;i++){
        cout<<"Masukkan elemen ke-"<<i<<": ";
        cin>>element;
        Insert(element);
    }
    printf("\nHeap Sort Array : \n");
    for(int i = 0;i < number_of_elements;i++){
        cout<<DeleteMin()<<" ";
    }
    cout<<endl;
    return 0;
}
