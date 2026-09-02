struct media {
    float media_final;
    int qtd_notas;
    float notas[10];
};

struct Aluno {
    char nome[50];
    int idade;
    struct media m;
    float nota1, nota2;
    float media_final;
};

struct boletim {
    struct Aluno aluno;
    char disciplina[50];
    int ano;
    int semestre;
};