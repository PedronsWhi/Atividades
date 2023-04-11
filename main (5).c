#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (9.0 * celsius / 5.0) + 32.0;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float celsiusToReaumur(float celsius) {
    return celsius * 4.0 / 5.0;
}

float reaumurToCelsius(float reaumur) {
    return reaumur * 5.0 / 4.0;
}

float kelvinToRankine(float kelvin) {
    return kelvin * 1.8;
}

float rankineToKelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int escolha;
    float valor;

    printf("Digite o valor da temperatura: ");
    scanf("%f", &valor);

    printf("Escolha a conversão desejada:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Celsius para Réaumur\n");
    printf("6. Réaumur para Celsius\n");
    printf("7. Kelvin para Rankine\n");
    printf("8. Rankine para Kelvin\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", valor, celsiusToFahrenheit(valor));
            break;
        case 2:
            printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", valor, fahrenheitToCelsius(valor));
            break;
        case 3:
            printf("%.2f graus Celsius equivalem a %.2f graus Kelvin.\n", valor, celsiusToKelvin(valor));
            break;
        case 4:
            printf("%.2f graus Kelvin equivalem a %.2f graus Celsius.\n", valor, kelvinToCelsius(valor));
            break;
        case 5:
            printf("%.2f graus Celsius equivalem a %.2f graus Réaumur.\n", valor, celsiusToReaumur(valor));
            break;
        case 6:
            printf("%.2f graus Réaumur equivalem a %.2f graus Celsius.\n", valor, reaumurToCelsius(valor));
            break;
        case 7:
            printf("%.2f graus Kelvin equivalem a %.2f graus Rankine.\n", valor, kelvinToRankine(valor));
            break;
        case 8:
            printf("%.2f graus Rankine equivalem a %.2f graus Kelvin.\n", valor, rankineToKelvin(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}