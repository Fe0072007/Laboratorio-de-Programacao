#include <stdio.h>

int main(){

    double valorHora, percentualDesconto;
    short int horasTrabalhadas;


    puts("-------Coleta de Dados-------");
    puts("Insira o valor da hora: ");
    scanf("%lf", &valorHora);
    puts("Insira as horas trabalhadas: ");
    scanf("%hd", &horasTrabalhadas);
    puts("Insira o percentual de desconto (Ex.: 10% = 0.1): ");
    scanf("%lf", &percentualDesconto);

    double salario = (double) valorHora * horasTrabalhadas;

    printf("Salário Bruto: %.2lf\n", salario);
    printf("Salário Líquido: %.2lf\n", salario - (salario * percentualDesconto));

}