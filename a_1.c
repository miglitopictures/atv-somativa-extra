#include <stdio.h>

int main(void){

    float price = 100.0;
    float *ptr = &price;

    printf("Valor original: R$%.2f\n", price);

    *ptr *= 1.1;

    printf("Valor com desconto: R$%.2f\n", price);
    return 0;
}