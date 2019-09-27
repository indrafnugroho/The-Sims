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
#define Hygiene(S) (S).Hygiene;
#define Energy(S) (S).Energy;
#define Fun(S) (S).Fun;

void SetInitState (SIMS s);
//Menentukan initial state Sims saat bangun tidur,
//yaitu Hygiene=0, Energy=10, Fun=0.

#endif // !SIMS_H