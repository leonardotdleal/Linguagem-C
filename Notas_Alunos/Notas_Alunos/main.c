#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[10];
    float *notas;
    float media;
} Aluno;

typedef struct turma {
    float media;
    int qtdAlunos;
    Aluno *alunos;
} Turma;

void calculaMediaTurma(Turma *turma);
float calculaVariancia(int *vet, float media);

void main() {

    Aluno *alunos;
    Turma *turma = malloc(sizeof(Turma));
    int qtdAlunos = 0,
        qtdNotas = 0,
        i = 0,
        j = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &turma->qtdAlunos);

    alunos = malloc(qtdAlunos * sizeof(Aluno));

    printf("Digite a quantidade de notas do semestre: ");
    scanf("%d", &qtdNotas);


    // Laço de repetição para cada aluno
    for (i = 0; i < turma->qtdAlunos; i++) {

        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);

        alunos[i].notas = malloc(turma->qtdAlunos * sizeof(float));

        //Laço de repetição para cada nota
        for (j = 0; j < sizeof(alunos->notas); j++) {
            printf("Digite a nota %d: ", j+1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    turma->alunos = alunos;

    calculaMediaTurma(turma);

}

void calculaMediaTurma(Turma *turma) {
    int i = 0,
        j = 0;
    float media = 0;

    // Laço de repetição para cada aluno
    for (media = 0, i = 0; i < sizeof(turma->qtdAlunos); i++) {
        //Laço de repetição para cada nota
        for (j = 0; j < sizeof(turma->alunos[i].notas); j++)
            media = media + turma->alunos[i].notas[j];

        turma->alunos[i].media = media / sizeof(turma->alunos[i].notas);
        turma->media = turma->media + turma->alunos[i].media;
    }
    turma->media = turma->media / turma->qtdAlunos;

    printf("\n%media turma: %f",turma->media);
}

float calculaVariancia(int *vet, float media) {
    int i = 0;
    float variancia = 0;

    for(i = 1; i <= vet[0]; i++)
        variancia += (vet[i]-media)*(vet[i]-media);

    variancia = variancia / vet[0];
    return variancia;
}
