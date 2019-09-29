// File : sims.h
// DESKRIPSI ABSTRACT DATA TYPE SIMS

#ifndef SIMS_H
#define SIMS_H

#include "boolean.h"

//TIPE BENTUKAN
typedef struct {
    int Hygiene;
    int Energy;
    int Fun;
} SIMS;

//SELEKTOR
#define Hygiene(S) (S).Hygiene
#define Energy(S) (S).Energy
#define Fun(S) (S).Fun

void SetInitState (SIMS s);
// Menentukan initial state Sims saat bangun tidur,
// yaitu Hygiene=0, Energy=10, Fun=0.

boolean IsFinal (SIMS s);
// Menghasilkan true jika semua atribut bernilai 0
// Atau semua atribut bernilai 15. 

void Cetak (SIMS s);
// Mencetak ke layar status dari SIMS saat ini.

#endif // !SIMS_H