// File : sims.h
// DESKRIPSI ABSTRACT DATA TYPE SIMS

#ifndef SIMS_H
#define SIMS_H

#include "boolean.h"

#define ValMin 0
#define ValMax 15

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

void Start (SIMS *s);
// Menentukan initial state Sims saat bangun tidur,
// yaitu Hygiene=0, Energy=10, Fun=0.

boolean IsFinal (SIMS s);
// Menghasilkan true jika semua atribut bernilai ValMin
// atau semua atribut bernilai ValMax. 

void ShowStats (SIMS s);
// Mencetak ke layar status dari SIMS saat ini.

boolean IsHygieneValid (SIMS s, int x, char op);
// Menghasilkan true apabila nilai hygiene awal
// ditambah/dikurang x valid, yaitu ValMin <= (Hygiene(S) +- x) <= ValMax

boolean IsEnergyValid (SIMS s, int x, char op);
// Menghasilkan true apabila nilai energy awal
// ditambah/dikurang x valid, yaitu ValMin <= (Energy(S) +- x) <= ValMax

boolean IsFunValid (SIMS s, int x, char op);
// Menghasilkan true apabila nilai fun awal
// ditambah/dikurang x valid, yaitu ValMin <= (Fun(S) +- x) <= ValMax 

void Nap (SIMS *s);
// Menambah 10 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.

void Sleep (SIMS *s);
// Menambah 15 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.

void EatHamburger (SIMS *s);
// Menambah 5 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.

void EatPizza (SIMS *s);
// Menambah 10 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.

void EatSteaknBeans (SIMS *s);
// Menambah 15 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.

void DrinkWater (SIMS *s);
// Mengurangi 5 Hygiene apabila nilai Hygiene valid.
// Mengeluarkan pesan error apabila nilai Hygiene tidak valid.

void DrinkCoffee (SIMS *s);
// Mengurangi 10 Hygiene dan Menambah 5 Energy apabila nilai Hygiene dan Energy valid.
// Mengeluarkan pesan error apabila nilai Hygiene dan Energy tidak valid. 

void DrinkJuice (SIMS *s);
// Mengurangi 5 Hygiene dan Menambah 10 Energy apabila nilai Hygiene dan Energy valid.
// Mengeluarkan pesan error apabila nilai Hygiene dan Energy tidak valid.

void PeePee (SIMS *s);
// Menambah 5 Hygiene apabila nilai Hygiene valid.
// Mengeluarkan pesan error apabila nilai Hygiene tidak valid.

void PooPoo (SIMS *s);
// Menambah 10 Hygiene dan mengurangi 5 Energy apabila nilai Hygiene dan Energy valid.
// Mengeluarkan pesan error apabila nilai Hygiene dan Energy tidak valid.

void GoToCafe (SIMS *s); 
// Menambah 15 Fun, mengurangi 10 Energy, dan mengurangi 5 Hygiene apabila ketiga nilai tersebut valid.
// Mengeluarkan pesan error apabila ketiga nilai tersebut tidak valid.

void SocMed (SIMS *s);
// Menambah 10 Fun dan mengurangi 10 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.

void PlayComputer (SIMS *s);
// Menambah 15 Fun dan mengurangi 10 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.

void TakeAShower (SIMS *s); 
// Menambah 15 Hygiene dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.

void WashHands (SIMS *s); 
// Menambah 5 Hygiene apabila nilai tersebut valid.
// Mengeluarkan pesan error apabila nilai tersebut tidak valid.

void ListenToRadio (SIMS *s); 
// Menambah 10 Fun dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.

void ReadNewspaper (SIMS *s); 
// Menambah 5 Fun dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.

void ReadNovel (SIMS *s);
// Menambah 10 Fun dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.

#endif // !SIMS_H