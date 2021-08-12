
/* Este programa muestra los peligros que acechan
        al incauto lector de caracteres */

char unaletra, otraletra;

int main(){

char *fun(char *cad1, char *cad2)
{
 char *aux; int tam;
 tam = strlen(cad1)+strlen(cad2)+1; // +1 para el caracter \0 final
 aux = (char *)malloc(tam); //Crear la nueva cadena
 if (aux!=NULL)
 { strcpy(aux,cad1); strcat(aux,cad2); } //Copiar cad1+cad2 en aux
 return aux;
}
}
