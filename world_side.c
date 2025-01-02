#include <stdio.h>
#include <stdlib.h>
#include "dist_header.h"


uint8_t choice;

boolean choiceIsCorrect(uint8_t choice) {
    if(choice != 1 && choice != 2) {
        printf("\n[!] Invalid choice...\n\n");
        return FALSE;
    }
    else 
        return TRUE;
}

uint8_t referenceLatitude() {
    while(TRUE) {
        printf("[?] Select latitude:\n\t1. Nothern\n\t2. South\n\t> ");
        scanf("%d", &choice);

        if(choiceIsCorrect(choice)) 
            break;
    }

    return choice;
}

uint8_t referenceLongitude() {
    while(TRUE) {
        printf("[?] Select longitude:\n\t1. Western\n\t2. Eastern\n\t> ");
        scanf("%d", &choice);

        if(choiceIsCorrect(choice)) 
            break;
    }

    return choice;
}

void setCoordValues(uint8_t fa, uint8_t fb, uint8_t la, uint8_t lb, double *Fb, double *Lb) {
    if(fa != fb) (*Fb) = -(*Fb);
    if(la != lb) (*Lb) = -(*Lb);
}