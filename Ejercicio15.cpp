#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int contar_vocales(char *);

int main(){   
char cad[500],*p;
int longi,i,x,P,R,V,longinP,len,NumeroAleatorio;
int porc=0;

printf("Ingrese un texto: ");
gets(cad);
longi = strlen(cad);

len = strlen(cad);
printf("\nTexto al reves: ");
i=0;
for(i=len;i>=0;i--){
     printf("%c",cad[i]);         
 }
printf("\n");
p=cad;
while(*p!='\0'){
	if(*p==' ')
        *p='_';
		 p++;
	}
	printf( "Con piso: %s \n",cad);

getch();
}

