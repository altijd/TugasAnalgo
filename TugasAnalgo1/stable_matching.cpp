/*
Nama Program    : worksheet1-stablematching
Nama            : Refa Annisatul Ilma
NPM             : 140810170060
Tanggal Buat    : 27 Februari 2019
Deskripsi       : Stable-matching with Gale-Shapley Algorithm
*/

// C++ program for stable marriage problem
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define N  5        // Number of Men or Women

// This function returns true if woman 'w' prefers man 'm1' over man 'm'
bool wPrefersM1OverM(int prefer[2*N][N], int w, int m, int m1){ // w prefers m1 than m
    for (int i = 0; i < N; i++){
        if(prefer[w][i] == m1)
            return true;
        if(prefer[w][i] == m)
           return false;
    }
}

void stableMarriage(int prefer[2*N][N]){
    int wPartner[N];
    bool mFree[N];

    // Initialize all men and women as free
    memset(wPartner, -1, sizeof(wPartner));
    memset(mFree, false, sizeof(mFree));
    int freeCount = N;

    while (freeCount > 0){
        int m;
        for (m = 0; m < N; m++)
            if (mFree[m] == false)
                break;

        for (int i = 0; i < N && mFree[m] == false; i++){
            int w = prefer[m][i];

            if (wPartner[w-N] == -1){
                wPartner[w-N] = m;
                mFree[m] = true;
                freeCount--;
            }

            else{
                int m1 = wPartner[w-N];
                if (wPrefersM1OverM(prefer, w, m, m1) == false){
                    wPartner[w-N] = m;
                    mFree[m] = true;
                    mFree[m1] = false;
                }
            }
        }
    }


    // Print
    cout << "Woman   Man" << endl;
    for (int i = 0; i < N; i++)
        cout << " " << i+N << "\t" << wPartner[i] << endl;
}

int main()
{
    int prefer[2*N][N] = { {6, 5, 8, 9, 7}, //0. Victor
        {8, 6, 5, 7, 9},    //1. Wyatt
        {6, 9, 7, 8, 5},    //2. Xavier
        {5, 8, 7, 6, 9},    //3. Yancey
        {6, 8, 5, 9, 7},    //4. Zeus
        {4, 0, 1, 3, 2},    //5. Amy
        {2, 1, 3, 0, 4},    //6. Bertha
        {1, 2, 3, 4, 0},    //7. Clare
        {0, 4, 3, 2, 1},    //8. Diane
        {3, 1, 4, 2, 0}     //9. Erika
    };
    stableMarriage(prefer);

    return 0;
}
