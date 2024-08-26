#include <stdio.h>
 
int main() {
    
    int cod, qtd;
    double valor, preco;
    preco = 0;
    for (int i = 0; i < 2; i++){
        scanf("%d", &cod);
        scanf("%d", &qtd);
        scanf("%lf", &valor);
        preco += qtd*valor;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", preco);
    return 0;
}