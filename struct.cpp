#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct dados{
    char     rua[256];
    int     nmr;
    char    cidade[124];
} ENDER;

typedef struct pessoa{
    char    nome[124];
    ENDER    end_pessoa;


} PESSOA;

int main (void){
    setlocale(LC_ALL, "Portuguese");

    PESSOA aluno;

    strcpy(aluno.nome, "Jo�o Luiz");
    strcpy(aluno.end_pessoa.rua, "Rua Esperan�a");


    return 0;
}
