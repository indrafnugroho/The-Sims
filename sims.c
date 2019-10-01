#include "sims.h"
#include <stdio.h>

void Start (SIMS *s) {
// Menentukan initial state Sims saat bangun tidur,
// yaitu Hygiene=0, Energy=10, Fun=0.
	printf("\n\n");
	printf("     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("    |             Welcome to THE SIMS SIMULATOR           |\n");
	printf("     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");

	printf("     TTTTTTTTTTTTTT       HHHHH    HHHHH        EEEEEEEEEE\n");
	printf("     TTTTTTTTTTTTTT       HHHHH    HHHHH        EEEEEEEEEE\n");
	printf("         TTTTT            HHHHH    HHHHH        EEEE       \n");
	printf("         TTTTT            HHHHHHHHHHHHHH        EEEEEEEEEE\n");
	printf("         TTTTT            HHHHHHHHHHHHHH        EEEEEEEEEE\n");
	printf("         TTTTT            HHHHH    HHHHH        EEEE       \n");
	printf("         TTTTT            HHHHH    HHHHH        EEEEEEEEEE\n");
	printf("         TTTTT            HHHHH    HHHHH        EEEEEEEEEE\n\n\n");

	printf("       SIMS SIMULATOR SIMS SIMULATOR SIM SIMULATOR SIMS\n");
	printf("       SIMS SIMULATOR SIMS SIMULATOR SIM SIMULATOR SIMS\n");
	printf("       SIMS SIMULATOR SIMS SIMULATOR SIM SIMULATOR SIMS\n\n\n");

	printf("  Valid actions are provided below\n  Please pay attention to the capital letters\n");
	printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf(" | >>> Tidur Siang            >>> Buang Air Besar              |\n");
	printf(" | >>> Tidur Malam            >>> Bersosialisasi ke Kafe       |\n");
	printf(" | >>> Makan Hamburger        >>> Bermain Media Sosial         |\n");
	printf(" | >>> Makan Pizza            >>> Bermain komputer             |\n");
	printf(" | >>> Makan Steak and Beans  >>> Mandi                        |\n");
	printf(" | >>> Minum Air              >>> Cuci Tangan                  |\n");
	printf(" | >>> Minum Kopi             >>> Mendengarkan Musik di Radio  |\n");
	printf(" | >>> Minum Jus              >>> Membaca Koran                |\n");
	printf(" | >>> Buang Air Kecil        >>> Membaca Novel                |\n");
	printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
	printf("Good Morning! Have a Nice Day!!!\n");

	Hygiene(*s) = 0;
	Energy(*s) = 10;
	Fun(*s) = 0;
}

boolean IsFinal (SIMS s) {
// Menghasilkan true jika semua atribut bernilai ValMin
// Atau semua atribut bernilai ValMax. 
	return ((Hygiene(s) == ValMin && Energy(s) == ValMin && Fun(s) == ValMin) || (Hygiene(s) == ValMax && Energy(s) == ValMax && Fun(s) == ValMax));
}

void ShowStats (SIMS s) {
// Mencetak ke layar status dari SIMS saat ini.
	printf(" ~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("  Sims' current states:\n");
	printf("  Hygiene = %d\n", Hygiene(s));
	printf("  Energy = %d\n", Energy(s));
	printf("  Fun = %d\n", Fun(s));
	printf(" ~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

boolean IsHygieneValid (SIMS s, int x, char op) {
// Menghasilkan true apabila nilai hygiene awal
// ditambah/dikurang x valid, yaitu ValMin <= (Hygiene(S) +- x) <= ValMax
	if (op=='+') {
		return ((Hygiene(s)+x >= ValMin) && (Hygiene(s)+x <= ValMax));
	} else {
		return ((Hygiene(s)-x >= ValMin) && (Hygiene(s)-x <= ValMax));
	}
}

boolean IsEnergyValid (SIMS s, int x, char op) {
// Menghasilkan true apabila nilai energy awal
// ditambah/dikurang x valid, yaitu ValMin <= (Energy(S) +- x) <= ValMax
	if (op == '+') {
		return ((Energy(s) + x >= ValMin) && (Energy(s) + x <= ValMax));
	} else {
		return ((Energy(s) - x >= ValMin) && (Energy(s) - x <= ValMax));
	}
}

boolean IsFunValid (SIMS s, int x, char op) {
// Menghasilkan true apabila nilai fun awal
// ditambah/dikurang x valid, yaitu ValMin <= (Fun(S) +- x) <= ValMax
	if (op=='+') {
		return ((Fun(s)+x >= ValMin) && (Fun(s)+x <= ValMax));
	} else {
		return ((Fun(s)-x >= ValMin) && (Fun(s)-x <= ValMax));
	} 
}

void Nap (SIMS *s) {
// Menambah 10 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.
	if (IsEnergyValid(*s, 10, '+')) {
		Energy(*s) += 10;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void Sleep (SIMS *s) {
// Menambah 15 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.
	if (IsEnergyValid(*s, 15, '+')) {
		Energy(*s) += 15;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void EatHamburger (SIMS *s) {
// Menambah 5 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.
	if (IsEnergyValid(*s, 5, '+')) {
		Energy(*s) += 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void EatPizza (SIMS *s) {
// Menambah 10 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.
	if (IsEnergyValid(*s, 10, '+')) {
		Energy(*s) += 10;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void EatSteaknBeans (SIMS *s) {
// Menambah 15 Energy apabila nilai Energy valid.
// Mengeluarkan pesan error apabila nilai Energy tidak valid.
	if (IsEnergyValid(*s, 15, '+')) {
		Energy(*s) += 15;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void DrinkWater (SIMS *s) {
// Mengurangi 5 Hygiene apabila nilai Hygiene valid.
// Mengeluarkan pesan error apabila nilai Hygiene tidak valid.
	if (IsHygieneValid(*s, 5, '-')) {
		Hygiene(*s) -= 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void DrinkCoffee (SIMS *s) {
// Mengurangi 10 Hygiene dan Menambah 5 Energy apabila nilai Hygiene dan Energy valid.
// Mengeluarkan pesan error apabila nilai Hygiene dan Energy tidak valid. 
	if (IsEnergyValid(*s, 5, '+') && IsHygieneValid(*s, 10, '-')) {
		Energy(*s) += 5;
		Hygiene(*s) -= 10;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void DrinkJuice (SIMS *s) {
// Mengurangi 5 Hygiene dan Menambah 10 Energy apabila nilai Hygiene dan Energy valid.
// Mengeluarkan pesan error apabila nilai Hygiene dan Energy tidak valid.
	if (IsEnergyValid(*s, 10, '+') && IsHygieneValid(*s, 5, '-')) {
		Energy(*s) += 10;
		Hygiene(*s) -= 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void PeePee (SIMS *s) {
// Menambah 5 Hygiene apabila nilai Hygiene valid.
// Mengeluarkan pesan error apabila nilai Hygiene tidak valid.
	if (IsHygieneValid(*s, 5, '+')) {
		Hygiene(*s) += 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void PooPoo (SIMS *s) {
// Menambah 10 Hygiene dan mengurangi 5 Energy apabila nilai Hygiene dan Energy valid.
// Mengeluarkan pesan error apabila nilai Hygiene dan Energy tidak valid.
	if (IsEnergyValid(*s, 5, '-') && IsHygieneValid(*s, 10, '+')) {
		Energy(*s) -= 5;
		Hygiene(*s) += 10;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void GoToCafe (SIMS *s) { 
// Menambah 15 Fun, mengurangi 10 Energy, dan mengurangi 5 Hygiene apabila ketiga nilai tersebut valid.
// Mengeluarkan pesan error apabila ketiga nilai tersebut tidak valid.
	if (IsEnergyValid(*s, 10, '-') && IsHygieneValid(*s, 5, '-') && IsFunValid(*s, 15, '+')) {
		Energy(*s) -= 10;
		Hygiene(*s) -= 5;
		Fun(*s) += 15;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void SocMed (SIMS *s) {
// Menambah 10 Fun dan mengurangi 10 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.
	if (IsEnergyValid(*s, 10, '-') && IsFunValid(*s, 10, '+')) {
		Energy(*s) -= 10;
		Fun(*s) += 10;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void PlayComputer (SIMS *s) {
// Menambah 15 Fun dan mengurangi 10 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.
	if (IsEnergyValid(*s, 10, '-') && IsFunValid(*s, 15, '+')) {
		Energy(*s) -= 10;
		Fun(*s) += 15;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void TakeAShower (SIMS *s) {
// Menambah 15 Hygiene dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.
	if (IsHygieneValid(*s, 15, '+') && IsEnergyValid(*s, 5, '-')) {
		Hygiene(*s) += 15;
		Energy(*s) -= 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void WashHands (SIMS *s) {
// Menambah 5 Hygiene apabila nilai tersebut valid.
// Mengeluarkan pesan error apabila nilai tersebut tidak valid.
	if (IsHygieneValid(*s, 5, '+')) {
		Hygiene(*s) += 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void ListenToRadio (SIMS *s) {
// Menambah 10 Fun dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.
	if (IsFunValid(*s, 10, '+') && IsEnergyValid(*s, 5, '-')) {
		Fun(*s) += 10;
		Energy(*s) -= 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void ReadNewspaper (SIMS *s) {
// Menambah 5 Fun dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.
	if (IsFunValid(*s, 5, '+') && IsEnergyValid(*s, 5, '-')) {
		Fun(*s) += 5;
		Energy(*s) -= 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}

void ReadNovel (SIMS *s) {
// Menambah 10 Fun dan mengurangi 5 Energy apabila kedua nilai tersebut valid.
// Mengeluarkan pesan error apabila kedua nilai tersebut tidak valid.
	if (IsFunValid(*s, 10, '+') && IsEnergyValid(*s, 5, '-')) {
		Fun(*s) += 10;
		Energy(*s) -= 5;
		ShowStats(*s); printf("\n");
	} else {
		printf("Aksi tidak valid\n\n");
	}
}