/*
Nama Program    : matrixAdjacency.cpp
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    :
Deskripsi       :
*/

#include<iostream>
using namespace std;

int main(){
	int matriks[8][8] = {
	{0,1,1,0,0,0,0,0},
	{1,0,1,1,1,0,0,0},
	{1,1,0,0,1,0,1,1},
	{0,1,0,1,1,0,0,0},
	{0,1,1,1,0,1,0,0},
	{0,0,0,0,1,0,0,0},
	{0,0,1,0,0,0,0,1},
	{0,0,1,0,0,0,1,0}
	};
	for(int i=0;i<8;i++){
		for(int j=0; j<8;j++){
			cout<<matriks[i][j]<<" ";
		}
		cout<<endl;
	}
}
