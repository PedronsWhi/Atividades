#include <stdio.h>

float calculaMedia(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3.0;
    return media;
}

int main() {
    int nEstudantes;
    printf("Digite o número de estudantes: ");
    scanf("%d", &nEstudantes);

    for (int i = 1; i <= nEstudantes; i++) {
        float nota1, nota2, nota3;
        printf("Digite as notas das três provas para o estudante %d:\n", i);
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        float media = calculaMedia(nota1, nota2, nota3);
        printf("A média do estudante %d é %.2f\n", i, media);
    }

    return 0;
}