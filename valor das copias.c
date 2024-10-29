#include<stdio.h>
int main(){
    int quantidade;
    printf("Quantas copias?");
    scanf("%d", &quantidade);
    if( quantidade <=100 ){
        float valor=  quantidade * 0.25 ;
        printf(" o valor a ser pago sera:%f",valor);
    }
    if( quantidade >100 ){
        float valor= quantidade * 0.20 ;
        printf("o valor a ser pago sera: %f",valor);
    }

}