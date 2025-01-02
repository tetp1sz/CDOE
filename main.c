#include <stdio.h>
#include <stdlib.h>
#include "dist_header.h"


int main() {
    CLRSCR;
    
    double Fa, Fb, La, Lb;
    uint8_t fa, fb, la, lb;

    menuTextIntro();
    #ifdef _WIN32
        menuAudioIntro();
    /* #elif __unix__
        GETCH; */
    #endif

    while(TRUE) {
        CLRSCR;
        printf("\t\t\tCALCULATING DISTANCE ON EARTH\n");
        printf("\n[?] Enter the latitude of the first object: ");
        scanf("%lf", &Fa);
        fa = referenceLatitude();

        printf("[?] Enter the longitude of the first object: ");
        scanf("%lf", &La);
        la = referenceLongitude();

        printf("[?] Enter the latitude of the second object: ");
        scanf("%lf", &Fb);
        fb = referenceLatitude();

        printf("[?] Enter the longitude of the second object: ");
        scanf("%lf", &Lb);
        lb = referenceLongitude();

        setCoordValues(fa, fb, la, lb, &Fb, &Lb);

        printf("\n[i] Approximate distance between objects A {%lf; %lf} and B {%lf; %lf} = %lf km\n\a...Press ESC to exit or any key to continue", 
            Fa, La, Fb, Lb, 
            calculateDistance(degToRad(Fa), degToRad(Fb), degToRad(La), degToRad(Lb))
        );

        uint8_t keyNumber = GETCH;
        if(keyNumber == ESC_KEY) {
            CLRSCR;
            break;
        }
    }

    return 0;
}
