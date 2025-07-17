#include <stdio.h>

    int main () {

        printf("BEM VINDO AO SUPER TRUNFO! \n");

            int carta, população, Pturisticos;
            char cidade[20];
            float área, PIB;


            printf("Número da Carta: \n");
            scanf("%d", &carta);
            printf("O número da carta é: %d\n", carta);
            
            printf("Nome da Cidade: \n");
            scanf("%s", cidade);
            printf("O nome da cidade é: %s\n", cidade);
           
            printf("População: \n");
            scanf("%d", &população);
            printf("A população é de: %d\n", população);
           
            printf("PIB: \n");
            scanf("%f", &PIB);
            printf("O PIB é de: %.3f bilhões de reais\n", PIB);
            
            printf("Pontos Turísticos: \n");
            scanf("%d", &Pturisticos);
            printf("São %d pontos turísticos\n", Pturisticos);

            printf("Área: \n");
            scanf("%f", &área);
            printf("Área é de: %.3f KM² \n", área);

        return 0;
    }

