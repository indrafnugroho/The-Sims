#include <stdio.h>
#include "sims.h"

int main () {
    //Kamus
    SIMS s; String inwords;

    Start(&s);
    while (!IsFinal(s)) {
        ShowStats(s); printf("\n");
        printf("What will you do? (type answer in Bahasa)\n");
        scanf("%s", &inwords);
        if (inwords == "Tidur Siang") {
            Nap(&s);
        }
        else if (inwords == "Tidur Malam") {
            Sleep(&s);
        }
        else if (inwords == "Makan Hamburger") {
            EatHamburger(&s);
        }
        else if (inwords == "Makan Pizza") {
            EatPizza(&s);
        }
        else if (inwords == "Makan Steak and Beans") {
            EatSteaknBeans(&s);
        }
        else if (inwords == "Minum Air") {
            DrinkWater(&s);
        }
        else if (inwords == "Minum Kopi") {
            DrinkCoffee(&s);
        }
        else if (inwords == "Minum Jus") {
            DrinkJuice(&s);
        }
        else if (inwords == "Buang Air Kecil") {
            PeePee(&s);
        }
        else if (inwords == "Buang Air Besar") {
            PooPoo(&s);
        }
        else if (inwords == "Bersosialisasi ke Kafe") {
            GoToCafe(&s);
        }
        else if (inwords == "Bermain Media Sosial") {
            SocMed(&s);
        }
        else if (inwords == "Bermain Komputer") {
            PlayComputer(&s);
        }
        else if (inwords == "Mandi") {
            TakeAShower(&s);
        }
        else if (inwords == "Cuci Tangan") {
            WashHands(&s);
        }
        else if (inwords == "Mendengarkan Musik di Radio") {
            ListenToRadio(&s);
        }
        else if (inwords == "Membaca Koran") {
            ReadNewspaper(&s);
        }
        else if (inwords == "Membaca Novel") {
            ReadNovel(&s);
        }
        else {
            printf("You put the wrong input. Try again\n");
        }
    }

    if (IsFinal(s)) {
        printf("You have finished your game. See you next time!");
    }
    return 0;
}