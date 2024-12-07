#include <stdint.h>


#define EARTH_RADIUS 0x18e3
#define ESC_KEY 0x1b
#define _USE_MATH_DEFINES


typedef char bool;


#ifdef _WIN32
    #include <Windows.h>
    #include <conio.h>
    #define CLRSCR system("cls")
    #define GETCH _getch()
    #define F_S 0x384        // sound frequency (Hz)
    #define S_L 0x3e8        // sound length (ms)
    void menuAudioIntro();
#elif __unix__
    #include <curses.h>
    #define GETCH getch()
    #define CLRSCR system("clear")
#endif


double calculateDistance(double Fa, double Fb, double La, double Lb);
double degToRad(double a);
uint8_t referenceLatitude();
uint8_t referenceLongitude();
void setCoordValues(uint8_t fa, uint8_t fb, uint8_t la, uint8_t lb, double *Fb, double *Lb);
void menuTextIntro();
