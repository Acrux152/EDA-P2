#include <stdio.h>
#include <stdlib.h>
/*Equipo 9. Código escrito por Novak Okcham González el 11 de marzo de 2021*/
void division(float *a, float *b, float *c);
void multi(float *a, float *b, float *c);
void suma(float *a, float *b, float *c);
void resta(float *a, float *b, float *c);

int main()
{
    int op, term=0;
    char simb;
    float a, b, c;

    do{
        printf("Presione 1)Para suma 2) Para resta 3) Para multiplicaci%cn 4) Para dividir\n",162);
        scanf("%i", &op);
        printf("Introduce el primer valor\n");
        scanf("%f", &a);
        printf("Introduce el segundo valor\n");
        scanf("%f", &b);
        switch(op){
            case 1:
                suma(&a, &b, &c);
                simb='+';
                break;
            case 2:
                resta(&a, &b, &c);
                simb='-';
                break;
            case 3:
                multi(&a, &b, &c);
                simb='*';
                break;
            case 4:
                division(&a, &b, &c);
                simb='/';
                break;
            default:
                printf("Escoja una opci%cn v%clida\n", 162, 160);
        }
        printf("El resultado de %f %c %f es: %f\n", a, simb,  b, c);
        printf("¿Desea hacer otra operaci%cn?\n1)no\t2)si\n", 162);
        scanf("%d", &term);
    }while(term!=1);
    system("pause");
    return 0;
}

void division(float *a, float *b, float *c){
	*c=*a/(*b);
}

void multi(float *a, float *b, float *c){
	*c=*a*(*b);
}

void resta(float *a, float *b, float *c){
	*c=*a-*b;
}

void suma(float *a, float *b, float *c){
	*c=*a+*b;
}
