#include <stdio.h>

void aplicar_desconto(float *preco, float desconto){
    *preco *= 1 + ( desconto / 100 );
}

int main(void){

    float preco = 120.0;

    printf("Valor original: R$%.2f\n", preco);

    aplicar_desconto(&preco, 10);

    printf("Valor com desconto: R$%.2f\n", preco);
    return 0;
}