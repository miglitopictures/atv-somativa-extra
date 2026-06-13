# Resoluções
*Atividade Somativa Extra para disciplina de Proframação Imperativa e Funcional.*

Instruções para cada atividade podem ser encontradas em [instructions.md](./instructions.md).

## Atividade 1
Na atividade 1, eu utilizo a desreferência do ponteiro pricePtr para modificar o valor de price:
```c
float price = 100.0;
float *pricePtr = &price;
*pricePtr *= 1.1;
```
---
## Atividade 2
Utilizo o ponteiro float *preco em aplicar_desconto para receber o endereço de uma variável float e modifico seu valor internamente com desreferência.
```c
void aplicar_desconto(float *preco, float desconto){
    *preco *= 1 + ( desconto / 100 );
}
```
---
## Atividade 3
Na atividade 3 introduzo a struct Produto:
```c
typedef struct {
    int id;
    float preco;
} Produto;
// Usei o typedef pra ficar mais fácil de ler nos argumentos da função;
```
E modifico a função aplicar_desconto(), agora recebendo como primeiro parâmetro um ponteiro para Produto e utilizando a sintaxe de seta `->` para modificar o valor do membro `preco` internamente:
```c
void aplicar_desconto(Produto *produto, float desconto){
    produto->preco *= 1 + ( desconto / 100 );
}
```
---
## Atividade 4
Na atividade 4, defino a função imprimir_produtos():
```c
void imprimir_produtos(Produto *produtos, int qtd);
```
Que utiliza aritmética de ponteiros para percorrer uma lista de produtos e imprimir seus valores:
```c
for (int i =0; i < qtd; i++)
    printf("id: %d | preço: R$%.2f\n", (produtos + i)->id, (produtos + i)->preco);
```
---
## Atividade 5
Na atividade 5 recebo a quantidade de produtos por input do usuário com scanf():
```c
scanf("%d%*c", &numProdutos)
```
E utilizei malloc para definir o tamanho do array dinamicamente no runtime:
```c
Produto *produtos;
produtos = malloc(sizeof(Produto) * numProdutos);
```
Depois percorro o array, "preenchendo" os produtos com valores definidos pelo usuário:
```c
for (int i = 0; i < numProdutos; i++){
    printf("== Produto %02d ==\n", i+1);
    printf("ID do produto: ");
    scanf("%d%*c", &(produtos + i)->id);
    printf("Preço do produto: ");
    scanf("%f%*c", &(produtos + i)->preco);
}
```
Listo os produtos com imprimir_produtos() e "devolvo" a memória alocada para produtos com free().
```c
imprimir_produtos(produtos, numProdutos);
free(produtos);
```
---