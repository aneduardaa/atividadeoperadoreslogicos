#include<stdio.h>
#include<math.h>

main(){

 double numero;

printf("digite um numero");
scanf("%lf", &numero);

    if (numero == 5) {
        printf("O número é igual a 5.\n");

    } else if (numero == 200) {
        printf("O número é igual a 200.\n");

    } else if (numero == 400) {
        printf("O número é igual a 400.\n");

    } else if (numero > 0 && numero < 5) {
        printf("O número está entre 0 e 5.\n");

    } else if (numero >= 500 && numero <= 1000) {
        printf("O número está entre 500 e 1000.\n");

    } else {
        printf("O número está fora dos escopos anteriores.\n");
    }

    return 0;
}