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

P=0;
for(x=0;x<longi;x++){ 
 if(cad[x]==' ' && x!=499 && cad[x+1]!= ' '){
  P++;
  }
}
printf("\nCantidad de Palabras: %d",P+1);


printf("\nCantidad de Vocales: %d",contar_vocales(cad));
V = contar_vocales(cad);
printf("\nCantidad de caracteres: %d",longi-P);
longinP= longi-P;

p=cad;
while(*p!='\0'){
	if(*p==' ')
        *p='_';
		 p++;
	}
	

getch();
}

       
int contar_vocales(char *cad){
   
int cont=0;
char *aux=cad;
 
while(*aux){
   if(*aux=='a'||*aux=='e'||*aux=='i'||*aux=='o'||*aux=='u')
     cont++;
       aux++;               
   }
   
return cont;

}
