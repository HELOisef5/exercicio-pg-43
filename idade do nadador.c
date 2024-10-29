#include<stdio.h>
int main(){
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);
    if(idade<=10){
        printf(" Categoria infantil");
    }else if(idade>11 && idade<17){
        printf("Categoria juvenil");
    }else if(idade >=18){
        printf("Caregoria senior");
    }else{

    }
}