#include <stdio.h>
int main(){
    int alunos = 1;
    float nota1;
    float nota2;
    float media;
    while(alunos<=3){
        printf("Digite uma nota: ");
        scanf("%f",&nota1);
        printf("Digite uma outra nota: ");
        scanf("%f",&nota2);
        printf("Media: %.1f\n", (nota1+nota2)/2);

        alunos++;
    }
}
