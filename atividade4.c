#include<stdio.h>
#include<math.h>

main(){

int A, B, C;
 int maior;

printf("digite um valor\n");
scanf("%d %d %d", &A, &B, &C);

    if (A > B, C){
    maior = A;
    }

    if(B > A, C){
    maior = B;
    }

    if(C > A, B){
    maior = C;
    }

int menor;

    menor = A;
    if (B < menor) 
     menor = B;
    if (C < menor) 
    menor = C;


    printf("o maior numero é: %d\n", maior);
    printf("o menor valor e %d\n", menor);
    printf("valores em ordem crescente: %d %d %d\n", maior, B, menor);
    
}
