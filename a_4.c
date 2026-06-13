#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float desconto){
    produto->preco *= 1 + ( desconto / 100 );
}

void imprimir_produtos(Produto *produtos, int qtd){
    printf("__________produtos___________\n");
    for (int i =0; i < qtd; i++)
        printf("id: %d | preço: R$%.2f\n", (produtos + i)->id, (produtos + i)->preco);
    printf("_____________________________\n");
    
}

int main(void){

    Produto produtos[3];

    produtos[0].id = 10;
    produtos[0].preco = 70.0;

    produtos[1].id = 20;
    produtos[1].preco = 90.0;

    produtos[2].id = 33;
    produtos[2].preco = 80.0;

    imprimir_produtos(produtos, 3);
    return 0;
}