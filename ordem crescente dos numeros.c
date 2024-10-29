#include<stdio.h>
int main(){
    int n1;
    int n2;
    int n3;
    printf("Qual o primeiro numero?");
    scanf("%d", &n1);
    printf("Qual o segundo numero?");
    scanf("%d", &n2);
    printf("Qual o terceiro numero?");
    scanf("%d", &n3);
    if(n1<n2){
        if(n1<n3){
        printf("o primeiro numero e o menor");
        }if(n2<n3){
            printf("o segundo numeroe o segundo menor, sendo assim, o terceiro numero e o maior");
        }else{
            printf("o terceiro numero e o segundo menor, sendo assim o segundo numero e o maior");
        }
    }else{
        if(n2<n3){
            printf("o segundo numero e o menor");
        }if(n1<n3){
            printf("o primeiro numero e segundo menor, sendo assim o terceiro numero e o maior");
        }if(n3<n1)
        printf("o terceiro numero e o segundo menor, sendo assim o primeiro e o maior");
    }
    if(n3<n2){
        if(n3<n1)
        printf("o terceiro numero e o menor");
        if(n2<n1)
        ("o segundo numero e o segundo menor, sendo assim o primeiro e o maior");
        if(n1<n2)
        printf("o primeiro numero e o segundo menor, sendo assim o segundo numero e o maoir");
    }
}