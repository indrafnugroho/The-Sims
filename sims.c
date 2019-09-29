#include "sims.h"

void SetInitState (SIMS s){
//Menentukan initial state Sims saat bangun tidur,
//yaitu Hygiene=0, Energy=10, Fun=0.
	Hygiene(s) = 0;
	Energy(s) = 10;
	Fun(s) = 0;
}

boolean IsFinal (SIMS s){
// Menghasilkan true jika semua atribut bernilai 0
// Atau semua atribut bernilai 15. 
	return ((Hygiene(s) == 0 && Energy(s) == 0 && Fun(s) == 0) || (Hygiene(s) == 15 && Energy(s) == 15 && Fun(s) == 15)); 
}

void Cetak (SIMS s){
// Mencetak ke layar status dari SIMS saat ini.
	printf("Hygiene = %d\n", Hygiene(s));
	printf("Energy = %d\n", Energy(s));
	printf("Fun = %d\n", Fun(s));
}