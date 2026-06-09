#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float desconto){
    produto->preco *= 1 + ( desconto / 100 );
}

int main(void){

    Produto camisa;
    camisa.id = 1;
    camisa.preco = 70.0;

    printf("Valor original: R$%.2f\n", camisa.preco);

    aplicar_desconto(&camisa, 10);

    printf("Valor com desconto: R$%.2f\n", camisa.preco);
    return 0;
}