#include <stdio.h>
#include <math.h>

main (){

float numero;
float raizquadrada;
float quadrado;

    printf("digite um numero\n");
    scanf("%f", &numero);

    if (numero >= 0){
        raizquadrada = sqrt(numero);
        printf("o resultado da raiz quadrada é %2.f\n", raizquadrada);

    }else{ 
        quadrado = numero * numero;
        printf("o quadrado é %2.f", quadrado);

    }






}