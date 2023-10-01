float parteInteira(float x) {
    return (int)x;
}

float parteFracionaria(float x) {
    return x - (int)x;
}

float divInts(int x, int y){
    return (float) x / y; 
}

void soma1(int* x){
    *x = *x + 1;
}

void troca(float* end_valor1, float* end_valor2){
    float tmp = *end_valor1;
    
    *end_valor1 = *end_valor2;
    
    *end_valor2 = tmp;
}

unsigned long long fast_pow_2(int expoente) {
    return  (unsigned long long)1 << expoente;
}

int ddd(unsigned int number){
    if ((int)(number)/100 == 0){
        return number;
    }
    return ddd(number/10);
}

int soma1SePar(unsigned int number){
    return number + ((number % 2) == 0);
}

int parOuImpar(unsigned int number){
    return number % 2 == 0;
}
