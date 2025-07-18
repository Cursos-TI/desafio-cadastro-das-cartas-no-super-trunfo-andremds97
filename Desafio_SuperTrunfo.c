#include <stdio.h>

    int main () {

        printf("BEM VINDO AO SUPER TRUNFO! \n");
            
            // Colocando variáveis
            int população, Pturisticos;
            char carta[20], cidade[20];
            float área, PIB;
            
            // Caracteristicas da Cidade N°1
            // Registrando as Caracteristicas no Banco de dados
            printf("---------Cidade A---------\n");
            printf("Número da Carta: \n");
            scanf("%s", carta);
           
            printf("Nome da Cidade: \n");
            scanf("%s", cidade);
           
            printf("População: \n");
            scanf("%d", &população);
            
            printf("PIB: \n");
            scanf("%f", &PIB);
            
            printf("Pontos Turísticos: \n");
            scanf("%d", &Pturisticos);
        
            printf("Área: \n");
            scanf("%f", &área);
        
            //caracteristicas da Cidade N°2
            //Registrando as caracteristicas no Banco de dados
            int população2, Pturisticos2;  
            char carta2[20], cidade2[20];
            float área2, PIB2;
          
            printf("---------Cidade B---------\n");
            printf("Número da carta: \n");
            scanf("%s", carta2);

            printf("Nome da cidade: \n");
            scanf("%s", cidade2);

            printf("População: \n");
            scanf("%d", &população2);

            printf("PIB: \n");
            scanf("%f", &PIB2);
        
            printf("Pontos Turisticos: \n");
            scanf("%d", &Pturisticos2);

            printf("Área: \n");
            scanf("%f", &área2);

            //Depois de escrever toda base de dados, agora é hora de imprimir as informações na tela usando a função print para aparecerem todas ao mesmo tempo.
            //Cidade n°1
            printf("Caracteristicas da Cidade A \n");
    
            printf("Carta A: %s\n", carta);
            printf("Cidade A: %s\n", cidade);
            printf("População A: %d\n", população);
            printf("PIB A: %.2f\n", PIB);
            printf("Pontos Turísticos A: %d\n", Pturisticos);
            printf("Área A: %.2f km²\n", área);
       
            printf("----------------------\n");

            printf("Caracteristicas da Cidade B \n");
            // cidade n°2
            printf("Carta B: %s\n", carta2);
            printf("Cidade B: %s\n", cidade2);
            printf("População B: %d\n", população2);
            printf("PIB B: %.2f\n", PIB2);
            printf("Pontos Turisticos B: %d\n", Pturisticos2);
            printf("Área B: %.2f km²\n", área);
           
           
            return 0;

    }

