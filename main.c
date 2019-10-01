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
            printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
            printf("!!! You put the wrong input. Try again !!!\n\n");
            printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
        }
    }

    /*if (IsFinal(s)) {
		if (Hygiene(s)==0) {
		    printf("YYY        YYY      AAAAAA      YYY        YYY\n");	    	
		    printf(" YYY      YYY      AAA  AAA      YYY      YYY \n");	
		    printf("  YYY    YYY      AAA    AAA      YYY    YYY  \n");	
		    printf("   YYY  YYY      AAA      AAA      YYY  YYY   \n");	
		    printf("    YYYYYY      AAAAAAAAAAAAAA      YYYYYY    \n");	
		    printf("     YYYY      AAA          AAA      YYYY     \n");	
		    printf("     YYYY     AAA            AAA     YYYY     \n");	
		    printf("     YYYY    AAA              AAA    YYYY     \n\n\n");
        }
        else {
            printf("\n
                                                                              `.-:///-              \n
                                                                     `.-:-:osyhhhysoyho             \n
                                                           `.-::/os+oyhssoo++++/-./.:hh.            \n
                                                  `.--/+o+yyyyso/++-/+/-:::-.`     s`yh+            \n
                                        `.-:/+o++hyys./::/++/::::-.`               /-+yy`           \n
                              `.-:/+osyyyyoyso+//+/:-::.- `        `.`.:////:`     `o.yh/           \n
                     `.-:/+osyhhhyoo+++++/:-:...`            /+o:/oos+oysoshhy+     +.ohy           \n
           `.-:--+syysyssoo+++++/::::-.`        `-`          ohhhhhyso+oyhhyyhh+    -+-hh-          \n
      -+osyhooy/ /++++-::::-.`            :+ooyyyyo          .hhhhhhhh:`-yhhhyyy`    o`yho          \n
     shy+/+:`.:- :-.`                     :hh+shyyy`          shhyhhhho  +hhyyyy/    ::/hh.         \n
     ohs o.        `.`::-+oo+:.           `yyy++yyy/          :hs/hhhhy` .yyo+hhy    `s`yh+         \n
     -hh-+.  `:ooyyhyysoyy+yhhho`          +yyyyyyhy           yyhhhs/h+./shhhhhh`    /-+hy`        \n
      yho.+   syhhhhhshhhyyhyyhho          .yyhhhyoy:          +hhhh.-yyhyshhhhho     .o.hh:        \n
      /hy.+   /hhhhhhhs`.oyhyyhyh-          ohhhhhhyo          .hhhy`shhhhhhys/.       o`shs        \n
      `yy/-/  .hhhhh+yy- .hhhyhyh/          -hhyhhhhh.          oyyyhhhhy-.`           -/-ss-       \n
       /sy`o   shhhhhhs+  yoyyhhh+           shhhyyhh+          -yhyyhhhh.              o`yy+       \n
       .ss-/-  :hhyhhhhy+shshhys/`           /hyshhhhs           osysyhhh+     `:/+oss  ::/sy`      \n
        oys`o  `yhhoshhhyyhhhhyso+.          `yhhhyyh::          :yhhsyhyy`     yhhhyy- `o`yy/      \n
        :hh-+.  +hhhhhhhh++shhhyyys-          +hhhyoyyy   `.-:/: `yhhhhs+y/     -yhhhy+  /.oys      \n
         yh+.+  .hhhhhhhh: .yyyhhhss          .hhshoyyh- .yhhyhs  +hhyssyhy     `+/:-.`  .+-hs:     \n
         /hy`o`  ohhhhhhy+  +hhhhhsy-  `.-://  shhhhhs/o  ohyyys- .hyso//:-`             .o shs     \n
         `yh/-:  -syhhhhyy. .hhhhhhh+  ohhhhs. :oyyhyyhy. :soo+/-  `           ``.:::-:/++/+yhs     \n
          oys`s   syyyyyyy+  shhhhhyy` /hhhyy+  sy:o+/:-`             `.--:-:/+/::/osyhhhyso+:      \n
          -h/ /-  /yyyyyhyy` :yyyhyss/ `oo++/-                .::::/+++++osyyyy:---//:-.`           \n
           sy+`:  `yyyyyyyh/  sso+/:-.             `  --.-`.-:++/oshhy+oo+/:-.`                     \n
           :.` ``  +ysso+:-.             ``    :::+/::+ooyhhyyso//:-.`                              \n
           `++/./                .-::::/+++/:--+yhhys++/:-.`                                        \n
           `+ys`s`    `.-:::://::++/oosy+yso+:--.`                                                  \n
            .yy/./::/++++oosyhhyyso:/:-.`                                                           \n
             //sosyhhhyso+::-.`                                                                     \n
              -.//:-.`                                                                              \n\n\n")
        }
        printf("You have finished your game. See you next time!\n");
        printf("You have finished your game. See you next time!\n");
        printf("You have finished your game. See you next time!\n");
    }*/
    return 0;
}