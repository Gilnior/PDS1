/*
Uma conta poupança foi aberta com um depósito de R$789,54,
com rendimentos de 0.56% de juros ao mês.
No segundo mês, R$303,20 reais foram depositados nessa conta poupança.
No terceiro mês, R$58,25 reais foram retirados da conta.

Implemente um programa que imprime quanto haverá nessa conta no quarto mês.

Resposta: A conta terá R$1050,91 no quarto mês.

*/
#include <stdio.h>

void interest(float* value, float rate){
    *value = *value * (1 + rate);
}

void deposit(float *current_value, float deposited_value) {
    if (deposited_value > 0) {
    *current_value += deposited_value;
    }
}

void take(float *current_value, float token_value) {
    if (token_value > 0 & *current_value >= token_value) {
        *current_value = *current_value - token_value; 
    }
}


int main() {
    float balance = 0;
    float rate = 0.0056;
    deposit(&balance, 789.54);
    interest(&balance, rate);
    deposit(&balance, 303.2);
    interest(&balance, rate);
    take(&balance, 58.25);
    interest(&balance, rate);

    printf("Balance: %.2f\n", balance);

    return 0;
}