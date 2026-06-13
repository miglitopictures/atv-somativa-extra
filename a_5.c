#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float desconto){
    produto->preco *= 1 + ( desconto / 100 );
}

void imprimir_produtos(Produto *produtos, int qtd){
    printf("\n__________produtos___________\n");
    for (int i =0; i < qtd; i++)
        printf("id: %d | preço: R$%.2f\n", (produtos + i)->id, (produtos + i)->preco);
    printf("_____________________________\n");
    
}

int main(void){

    int numProdutos;

    printf("Quantos produtos deseja cadastras: ");

    if (scanf("%d%*c", &numProdutos) != 1){
        printf("Quantidade inválida, tente novamente...");
        return 1;
    }

    Produto *produtos;
    produtos = malloc(sizeof(Produto) * numProdutos);

    printf("\n");

    for (int i = 0; i < numProdutos; i++){
        printf("== Produto %02d ==\n", i+1);
        printf("ID do produto: ");
        scanf("%d%*c", &(produtos + i)->id);
        printf("Preço do produto: ");
        scanf("%f%*c", &(produtos + i)->preco);
    }


    imprimir_produtos(produtos, numProdutos);

    free(produtos);

    return 0;
}