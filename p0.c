#include <stdio.h>
#include <string.h>
#define N 48


int main (){
    int salir=0,  Trocear,  Salir;
    char Leer;
    char cadena[N] ;
    char *trozos[N/2];


    while ( salir!= 1){
        leerEntrada(cadena);
        int ntrozos= TrocearEntrada(cadena, trozos);

        salir=procesarEntrada(trozos, ntrozos);

    }
}

void leerEntrada(char* cadena){

    char *x = fgets(cadena, N, stdin );
   // return x;
}


int TrocearCadena(char * cadena, char * trozos[])
{ int i=1;
    if ((trozos[0]=strtok(cadena," \n\t"))==NULL)
        return 0;
    while ((trozos[i]=strtok(NULL," \n\t"))!=NULL)
        i++;
    return i;
}

int ProcesarEntr
