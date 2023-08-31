#include<stdio.h>
#include<math.h>

main(){
    int valorA, valorB, valorC, valorD;
    int maior;

    printf("informe um valor");
    scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);

        if (valorA > valorB){
        maior = valorA;
         }

        if (valorB > valorA){
        maior = valorB;
         }

        if (valorC > valorA){
            maior = valorC;
        }

        if (valorD > valorA){
            maior = valorD;
        }

        if (valorA > valorB){
            maior = valorA;
        }

        if (valorC > valorB){
            maior = valorC;
        }

        if (valorD > valorB){
            maior = valorD;
        }

        if (valorA > valorC){
            maior = valorA;
        }

        if (valorB > valorC){
            maior = valorB;
        }

        if (valorD > valorC){
            maior = valorD;
        }

        if (valorA > valorD){
            maior = valorA;
        }

        if(valorB > valorD){
            maior = valorB;
        }

        if(valorC > valorD){
            maior = valorC;
        }

    int menor;

    menor = valorA;
    if (valorB < menor) 
     menor = valorB;
    if (valorC < menor) 
    menor = valorC;
    if (valorD < menor) 
    menor = valorD;
    

        printf("O maior valor é: %d\n", maior);
         printf("O menor valor é: %d\n", menor); 

        
}