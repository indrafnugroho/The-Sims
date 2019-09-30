#include <stdio.h>
#include "sims.h"

int main () {
    //Kamus
    SIMS s; String inwords;

    Start(&s);
    while (!IsFinal(s)) {
        ShowStats(s); printf("\n");
        printf("What will you do? (type answer in Bahasa)\n");
        scanf("%s", inwords);
        switch (inwords) {
            case "Tidur Siang" :
                Nap(&s);
                break;
            case "Tidur Malam" :
                Sleep(&s);
                break;
            case "Makan Hamburger" :
                EatHamburger(&s);
                break;
            case "Makan Pizza" :
                EatPizza(&s);
                break;
            case "Makan Steak and Beans" :
                EatSteaknBeans(&s);
                break;
            case "Minum Air" :
                DrinkWater(&s);
                break;
            case "Minum Kopi" :
                DrinkCoffee(&s);
                break;
            case "Minum Jus" :
                DrinkJuice(&s);
                break;
            case "Buang Air Kecil" :
                PeePee(&s);
                break;
            case "Buang Air Besar" :
                PooPoo(&s);
                break;
            case "Bersosialisasi ke Kafe" :
                GoToCafe(&s);
                break;
            case "Bermain Media Sosial" :
                SocMed(&s);
                break;
            case "Bermain Komputer" :
                PlayComputer(&s);
                break;
            case "Mandi" :
                TakeAShower(&s);
                break;
            case "Cuci Tangan" :
                WashHands(&s);
                break;
            case "Mendengarkan Musik di Radio" :
                ListenToRadio(&s);
                break;
            case "Membaca Koran" :
                ReadNewspaper(&s);
                break;
            case "Membaca Novel" :
                ReadNovel(&s);
                break;
        }
    }

    if (IsFinal(s)) {
        printf("You have finished your game. See you next time!");
    }
    return 0;
}