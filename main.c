#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float const G = 9.81;
    float v, a, t;
    float w, h;
    char c;

    //Ueberschrift

    printf("-------------------------------------------------\n");
    printf("|         Baseball simulation v.2               |\n");
    printf("|        Made by Matteo Pirchner-Gratz          |\n");
    printf("-------------------------------------------------\n\n");

    //Frage nach Geschwindigkeit und Grad
    start:

    printf("Speed [km/h]: ");
    scanf("%f", &v);
    printf("Angle [degrees]: ");
    scanf("%f", &a);

    printf("\nYou entered:\n");
    printf("Speed: %.2f km/h\nAngle: %.2f degrees\n\n", v, a);

    fflush(stdin);


    ask:

    printf("Is that right (y/n)? ");
    scanf("%c", &c);

    fflush(stdin);

    //if für Antword y/Y und n/N für yes und no

    if(c == 'y'){

        //Ausrechung/Verwertung

        v = v / 3.6;
        a = a * M_PI / 180;

        printf("\n         t         w         h\n");
        while(t < 10.1){
        h = v * t * sin(a) - (t * t * G / 2);
        w = v * t * cos(a);
        printf("\n%10.1f%10.2f%10.2f\n", t, w, h);
        t+= 0.1;
        }
    }

    else if(c == 'Y'){

        //Ausrechung/Verwertung

        v = v / 3.6;
        a = a * M_PI / 180;

        printf("\n         t         w         h\n");
        while(t < 10.1){
        h = v * t * sin(a) - (t * t * G / 2);
        w = v * t * cos(a);
        printf("\n%10.1f%10.2f%10.2f\n", t, w, h);
        t+= 0.1;
        }
    }

    else if(c == 'n'){
        printf("Okay!\n\n");
        goto start;
    }
    else if(c == 'N'){
        printf("Okay!\n\n");
        goto start;
    }
    else{
        printf("\nWrong input!\n\n");
        goto ask;
    }

    getch();
    return 0;
}
