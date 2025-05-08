#include <stdio.h>

int main(){
    while(1){
        printf("===============================\nCalculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:\n");
        int opcao;
        double a, b;
        char denovo;
        scanf ("%d", &opcao);
        if (opcao > 5 || opcao < 1){
            printf ("Número fora do intervalo ou entrada não numérica.\n");
            continue;
        }
        if (opcao == 5){
            printf ("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }
        printf ("Digite o primeiro número:");
        if (scanf("%lf", &a)!=1){
            printf ("Erro: Entrada inválida.\n");
            getchar();
            continue;
        }
        printf ("Digite o segundo número:");
        if (scanf("%lf", &b)!=1){
            printf ("Erro: Entrada inválida.\n");
            getchar();
            continue;
        }
        if (opcao == 1){
            printf ("Resultado: %2.lf + %2.lf = %2.lf \n", a, b, a+b);
        }
        else if (opcao == 2){
            printf ("Resultado: %2.lf - %2.lf = %2.lf \n", a, b, a-b);
        }
        else if (opcao == 3){
            printf ("Resultado: %2.lf * %2.lf = %2.lf \n", a, b, a*b);
        }
        else if (opcao == 4){
            if (b == 0){
                printf ("Erro: Divisão por zero não é permitida. \n");
            }
            else{
                printf ("Resultado: %2.lf / %2.lf = %2.lf \n", a, b, a/b);
            }
        }
        while (1){
            printf("Deseja realizar outra operação? (s/n): ");
            getchar();
            scanf ("%c", &denovo);
            if (denovo=='N' || denovo=='n'){
                printf ("Obrigado por usar a calculadora! Até a próxima. \n");
                return 0;
            }
            else if (denovo=='s' || denovo=='S'){
                break;
            }
            else {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        }
    }
    return 0;
}