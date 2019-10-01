#include <stdio.h>
#include "sims.h"
#include <string.h>

int main () {
    //Kamus
    SIMS s; 
    char inwords[100];

    Start(&s);
    ShowStats(s); printf("\n");
    while (!IsFinal(s)) {
        printf("What will you do? (type answer in Bahasa)\n");
        printf(">>> ");
        scanf("%[^\n]%*c", inwords);
        if (strcmp(inwords, "Tidur Siang") == 0) {
            Nap(&s);
        }
        else if (strcmp(inwords, "Tidur Malam") == 0) {
            Sleep(&s);
        }
        else if (strcmp(inwords, "Makan Hamburger") == 0){
            EatHamburger(&s);
        }
        else if (strcmp(inwords,"Makan Pizza") == 0) {
            EatPizza(&s);
        }
        else if (strcmp(inwords, "Makan Steak and Beans") == 0) {
            EatSteaknBeans(&s);
        }
        else if (strcmp(inwords, "Minum Air") == 0) {
            DrinkWater(&s);
        }
        else if (strcmp(inwords,"Minum Kopi") == 0) {
            DrinkCoffee(&s);
        }
        else if (strcmp(inwords,"Minum Jus") == 0) {
            DrinkJuice(&s);
        }
        else if (strcmp(inwords,"Buang Air Kecil") == 0) {
            PeePee(&s);
        }
        else if (strcmp(inwords,"Buang Air Besar") == 0) {
            PooPoo(&s);
        }
        else if (strcmp(inwords,"Bersosialisasi ke Kafe") == 0) {
            GoToCafe(&s);
        }
        else if (strcmp(inwords, "Bermain Media Sosial") == 0) {
            SocMed(&s);
        }
        else if (strcmp(inwords, "Bermain komputer") == 0) {
            PlayComputer(&s);
        }
        else if (strcmp(inwords, "Mandi") == 0) {
            TakeAShower(&s);
        }
        else if (strcmp(inwords, "Cuci Tangan") == 0) {
            WashHands(&s);
        }
        else if (strcmp(inwords,"Mendengarkan Musik di Radio") == 0) {
            ListenToRadio(&s);
        }
        else if (strcmp(inwords,"Membaca Koran") == 0) {
            ReadNewspaper(&s);
        }
        else if (strcmp(inwords, "Membaca Novel") == 0) {
            ReadNovel(&s);
        }
        else {
            printf("  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
            printf("  !!! You put the wrong input. Try again !!!\n\n");
            printf("  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
        }
    }

    if (IsFinal(s)) {
		if (Hygiene(s) == 15) {
		printf("                       /^\'                             \n");    
        printf("            /         (/^\')     /                      \n");     
        printf("       \'   ( \'         \' /     ( \'     /^\'             \n");       
        printf("      / )   \' |        _|_      \' |   |/^\'|            \n");       
        printf("     | /    _|_        | |      _|_    \' /             \n");    
        printf("     _|_    | |        | |      | |    _|_             \n");           
        printf("     | |    | |        | |      | |    | |             \n");          
        printf("     | |    | |    ****| |******| |    | |             \n");          
        printf("     | |****| |****    | |      | |****| |             \n");          
        printf("    *| |    | |                 | |    | |*****        \n");         
        printf("  *  | |   Y O U   W I N               | |      *      \n");         
        printf(" *                                               *     \n");             
        printf(" | *            Y O U   W I N             !      * |   \n");              
        printf(" |  *****                                 *****  |     \n");           
        printf(" |@      **********             **********      @|     \n");          
        printf(" | @   @           *************           @   @ |     \n");       
        printf(" |  @@@ @    @                       @    @ @@@  |     \n");            
        printf(" |       @@@@ @      @       @      @ @@@@       |     \n");             
        printf("  *            @@@@@@ @     @ @@@@@@            *      \n");               
        printf("   *                   @@@@@                   *       \n");               
        printf("    *****                                 *****        \n");                
        printf("         **********             **********             \n");         
        printf("                   *************                       \n\n\n");     

        }
        else {
           printf("                    _____  _____                        \n");           
           printf("                   <     `/     |                       \n");             
           printf("                    >          (                        \n");       
           printf("                   |   _     _  |                       \n");           
           printf("                   |  |_) | |_) |                       \n");       
           printf("                   |  | \' | |   |                       \n");          
           printf("                   |            |                       \n");    
           printf("    ______.________|            |__________  _____      \n");            
           printf("  _/                                       \'|     |     \n");         
           printf(" |               T U B E S   T B F O               <     \n");       
           printf(" |_____.-._________              ____/|___________|     \n");      
           printf("                   | * 18/09/19 |                       \n");        
           printf("                   | + 02/10/19 |                       \n");    
           printf("                   |            |                       \n");   
           printf("                   |            |                       \n");     
           printf("                   |   _        <                       \n");  
           printf("                   |__/         |                       \n");   
           printf("                    / `--.      |                       \n");     
           printf("                  0|            |0                      \n");      
           printf("              |/.00|          -< @000                   \n");         
           printf("              `\'0`@|     v      |@@0@00                 \n");      
           printf("            .000@@@|0    |    0 @@@00@0000              \n");     
           printf("       _.000000@@@@@@00_/0\'_0@@00@@@@@@@000000          \n\n\n");       


        }
    printf("You have finished your game. See you next time!\n");
    printf("You have finished your game. See you next time!\n");
    printf("You have finished your game. See you next time!\n");
    }
    return 0;
}