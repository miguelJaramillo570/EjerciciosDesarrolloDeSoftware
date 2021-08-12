#include <stdio.h>
#include <stdlib.h>+

using namespace std;

void sinesp(char cadena [100], char cadenasin[100]);

int main(){
	char cad[100],cadsin[100],vaciar;
	printf("Introduzca una frace: ");
	fgets(cad , 100,stdin);
	
	sinesp(cad,cadsin);
	printf("la cadena es %s",cadsin);
	
	return 0;
	
	}
	void sinesp(char cadena [100],char cadenasin[100]){
	int i,j;
	i=0;
	j=0;
	while(cadena[i]!='\0'){
		if(cadena[i]!=' '){
			cadenasin[j]=cadena[i];
			j++;
		}
		i++,
	}
}

