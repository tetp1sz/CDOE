#include <stdio.h>
#include "dist_header.h"

#ifdef _WIN32
    void menuAudioIntro() {
        Beep(F_S, S_L/3);
        Beep(F_S/1.5, S_L/5);
        Beep(F_S/4, S_L/5);
        Beep(F_S/2.5, S_L/5);
        Beep(F_S/1.5, S_L/5);
        Beep(F_S/3, S_L/5);
        Beep(F_S/2.5, S_L/5);
        Beep(F_S, S_L/3);
        
        Beep(F_S, S_L/3);
        Beep(F_S/1.5, S_L/5);
        Beep(F_S/4, S_L/5);
        Beep(F_S/2.5, S_L/5);
        Beep(F_S/1.5, S_L/5);
        Beep(F_S/3, S_L/5);
        Beep(F_S/2.5, S_L/5);
        Beep(F_S, S_L/3);
        Beep(F_S, S_L);
    }
#endif

void menuTextIntro() {
    printf("@@@@@@@  @@@ @@@      @@@@@@@ @@@@@@@@ @@@@@@@ @@@@@@@   @@@  @@@@@@ @@@@@@@@\n@@!  @@@ @@! !@@        @@!   @@!        @@!   @@!  @@@  @@@ !@@          @@!\n@!@!@!@   !@!@!         @!!   @!!!:!     @!!   @!@@!@!   !@!  !@@!!     @!!  \n!!:  !!!   !!:          !!:   !!:        !!:   !!:       !!!     !:!  !!:    \n:: : ::    .:            :    : :: :::    :     :        :   ::.: :  :.::.: :\n\n\n");
    printf("\t\t\tCALCULATING DISTANCE ON EARTH\n\n\n2024");
}
