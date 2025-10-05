#include "operacoes.h"
#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "pt_BR.UTF-8");
    int op;
    float a, b;
    do{
        printf("\n ~~~~~~CALCULADORA CIENTÍFICA~~~~~~\n");
        printf("\n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n 5 - Potenciação \n 6 - Radiciação \n 7 - Fatorial \n 8 - Sair");
        printf("\n Digite a opção:");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("\n Digite dois números:");
                scanf("%f %f", &a, &b);
                printf("A soma é: %.2f\n", somar(a, b));
                break;
            case 2:
                printf("Digite dois números:");
                scanf("%f %f", &a, &b);
                printf("A subtração é: %.2f\n", sub(a, b));
                break;
            case 3: 
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                printf("A multiplicação é: %.2f", multi(a, b));
                break;
            case 4:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                if(b==0){
                    printf("não é possível realizar divisão por 0.");
                    break;
                }
                    printf("A divisão é: %.2f", div(a, b));
                break;
            case 5:
                printf("Digite a base e o expoente:");
                scanf("%f %f", &a, &b);
                printf("A potência é: %.2f", potencia(a, b));
                break;
            case 6:
                printf("Digite um número: ");
                scanf("%f", &a);
                if(a<0){
                    printf("não existe raiz real para número negativo!");
                    break;
                    }
                printf("A raiz é: %.2f", raiz(a));
                 break;
            case 7:
                int a;
                printf("Digite um número inteiro:");
                scanf("%d", &a);
                if(a<0){
                    printf("fatorial não definido para número negativo.");
                    break;
                }
                printf("O fatorial é: %d\n", fatorial(a));
                break;
            case 8:
            printf("Saindo....");
            break;
            default:
            printf("Opção inválida!");
        }
    }while(op!=8);
        return 0;
    }
