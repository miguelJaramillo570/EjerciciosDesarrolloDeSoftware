#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct nodo{
      char dato;
      struct nodo *sgte;
};

typedef struct nodo *Pila;

Pila crearNodo(char x)
{
      Pila newNodo = new(struct nodo);
      newNodo->dato = x;
      return newNodo;
}

void push(Pila &top, char x)
{
     Pila aux = crearNodo(x);
     aux->sgte = top;
     top = aux;
}

char pop(Pila &top)
{
     int c ;
     Pila aux;
     
     aux = top ;
     c = aux->dato;   
     top = aux->sgte ;
     delete(aux);
     return c;
}

void balanceoSimbolos( Pila &p, string cad)
{
     Pila aux;
     int i = 0;
     
     while( cad[i] != '\0')
     {
            if( cad[i]=='(' || cad[i]=='[' || cad[i]=='{' )
            {
                 push( p, cad[i] );          
            }
            else if( cad[i]==')' || cad[i]==']' || cad[i]=='}' )
            {
                 aux = p;
                 
                 if(aux!=NULL)
                 {
                      if( cad[i]==')' )
                      {
                           if( aux->dato == '(')
                              pop( p );
                      }
                      else if( cad[i]==']' )
                      {
                           if( aux->dato == '[')
                              pop( p );
                      }
                      else if( cad[i]=='}' )
                      {
                           if( aux->dato == '{')
                              pop( p );
                      }        
                 }
                 else
                     push( p, cad[i] );
            }
            i++;           
     }
     
     if(p==NULL)
         cout<<"\n\tBalanceo CORRECTO..."<<endl;
     else
         cout<<"\n\t Balanceo INCORRECTO, faltan simbolos de agrupacion..."<<endl;          
     
     
}

int main()
{
    Pila pila = NULL;   
    string cad;
    
    cout<<"\n\t\tBALANCEO DE SIMBOLOS DE AGRUPACION \n\n";
    
    
    cout << " Ingrese expresion: ";
    getline(cin, cad);
    
    balanceoSimbolos( pila, cad );
    
    cout<<"\n\n";
    system("pause");
    return 0;
}
