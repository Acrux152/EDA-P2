#include <stdio.h>
#include <stdlib.h>
/*Equipo 9. Código escrito por Antonio Luna el 11 de marzo de 2021*/
int main(){
    //Se declaren variables de tipo: int, char, double, long, float y short.
    //Se declare un apuntador para cada una de las variables anteriores.

    int in;
    int *i;
    char ch, *c;
    double dou; double *d;
    long lo; long *l;
    float fl; float *f;
    short sh; short *s;
    //Se asigne la direcci�n de memoria a cada apuntador de la variable correspondiente
    i=&in;
    c=&ch;
    d=&dou;
    l=&lo;
    f=&fl;
    s=&sh;

    //Mostrar que el valor apuntado por el apuntador es igual que la direcci�n de memoria de lavariable que apunta
    printf("Memoria del entero sin apuntar: %p\n",&in);
    printf("Memoria del entero apuntada: %p\n\n",i);

    printf("Memoria del caracter sin apuntar: %p\n",&ch);
    printf("Memoria del caracter apuntada: %p\n\n",c);

    printf("Memoria del doble sin apuntar: % p\n",&dou);
    printf("Memoria del doble apuntada: %p\n\n",d);


    printf("Memoria del largo sin apuntar: %p\n",&lo);
    printf("Memoria del largo apuntada: %p\n\n",l);

    printf("Memoria del flotante sin apuntar: %p\n",&fl);
    printf("Memoria del flotante apuntada: %p\n\n",f);

    printf("Memoria del corto sin apuntar: %p\n",&sh);
    printf("Memoria del corto apuntada: %p\n\n",s);
    //Asignar un valor a las variables.
    in= 1;
    ch= 'b';
    dou=3;
    lo=4444;
    fl=5.5;
    sh=6;

    printf("Valor int guardado: %d\n", *i);
    printf("Valor char guardado: %c\n", *c);
    printf("Valor double guardado: %lf\n", *d);
    printf("Valor long guardado: %ld\n", *l);
    printf("Valor float guardado: %f\n", *f);
    printf("Valor short guardado: %d\n", *s);

    /*Modificamos los valores*/
    *i=9;
    *c='z';
    *d=1231;
    *l=9999;
    *f=1.1;
    *s=1;

    printf("Valor int guardado: %d\n", in);
    printf("Valor char guardado: %c\n", ch);
    printf("Valor double guardado: %lf\n", dou);
    printf("Valor long guardado: %ld\n", lo);
    printf("Valor float guardado: %f\n", fl);
    printf("Valor short guardado: %d\n", sh);

    system("pause");
    return 0;
}
