#include<stdio.h>
#include<math.h>
int main(){
    int pecastotais;
    int pecasdefeituosas;
    printf("Qual a quantidade de peças totais produzidas?");
    scanf("%d", &pecastotais);
    printf("Qual a quantidade de peças defeituosas?");
    scanf("%d", &pecasdefeituosas);
    float porcentagem = (pecastotais/100)* 10;
    if(pecasdefeituosas >= porcentagem){
        printf("A maquina precisa de manutencao %f");
    }
    else if(pecasdefeituosas< porcentagem){
        printf("A maquina nao precisa de manutencao %f");
    }



}