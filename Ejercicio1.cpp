#include<stdio.h>

/* Este programa muestra los peligros que acechan
        al incauto lector de caracteres */

char unaletra, otraletra;

void main(void)
{
        printf("Escriba una letra y pulse intro, por favor: ");
        scanf("%c", &unaletra);
        
        printf("La letra que ha pulsado era %c y su valor decimal es %d\n", unaletra, unaletra);
        
        printf("Ahora escriba otra letra, por favor: ");
        scanf("%c", &otraletra);
        
        printf("La letra que ha pulsado era %c y su valor decimal es %d\n", otraletra, otraletra);

        printf("\n\nTerminación normal del programa.\n\n");
}
