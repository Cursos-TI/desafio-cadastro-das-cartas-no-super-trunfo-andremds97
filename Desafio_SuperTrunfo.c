#include <stdio.h>

    int main () {

        printf("BEM VINDO AO SUPER TRUNFO! \n");
            
            // Colocando variáveis
            int Pturisticos;
            char carta[20], cidade[20];
            float área, PIB, densidadepopulacional, PIBpercapita, superpoder, inversodensidade;
            unsigned long int população;

            // Caracteristicas da Cidade N°1
            // Registrando as Caracteristicas no Banco de dados
            printf("---------Cidade A---------\n");
            printf("Número da Carta: \n");
            scanf("%s", carta);
           
            printf("Nome da Cidade: \n");
            scanf("%s", cidade);
           
            printf("População: \n");
            scanf("%lu", &população);
            
            printf("PIB: \n");
            scanf("%f", &PIB);
            
            printf("Pontos Turísticos: \n");
            scanf("%d", &Pturisticos);
        
            printf("Área: \n");
            scanf("%f", &área);
        
            
            densidadepopulacional = população / área;
            PIBpercapita = PIB / população;
            inversodensidade = área / população;
            
            superpoder = população + área + PIB + Pturisticos + PIBpercapita + inversodensidade;
                  


            //caracteristicas da Cidade N°2
            //Registrando as caracteristicas no Banco de dados
            int Pturisticos2;  
            char carta2[20], cidade2[20];
            float área2, PIB2, densidadepopulacional2, PIBpercapita2, inversodensidade2, superpoder2;
            unsigned long int população2;


            printf("---------Cidade B---------\n");
            printf("Número da carta: \n");
            scanf("%s", carta2);

            printf("Nome da cidade: \n");
            scanf("%s", cidade2);

            printf("População: \n");
            scanf("%lu", &população2);

            printf("PIB: \n");
            scanf("%f", &PIB2);
        
            printf("Pontos Turisticos: \n");
            scanf("%d", &Pturisticos2);

            printf("Área: \n");
            scanf("%f", &área2);

            densidadepopulacional2 = população2 / área2; 
            PIBpercapita = PIB2 / população2;
            inversodensidade2 = área2 / população2;
            
            superpoder2 = população2 + área2 + PIB2 + Pturisticos2 + PIBpercapita2 + inversodensidade2;
            
            //Depois de escrever toda base de dados, agora é hora de imprimir as informações na tela usando a função print para aparecerem todas ao mesmo tempo.
            //Cidade n° 1
            printf("Caracteristicas da Cidade A \n");
    
            printf("Carta A: %s\n", carta);
            printf("Cidade A: %s\n", cidade);
            printf("População A: %lu\n", população);
            printf("PIB A: %.2f\n", PIB);
            printf("Pontos Turísticos A: %d\n", Pturisticos);
            printf("Área A: %.2f km²\n", área);
            printf("Densidade Populacional: %2.f\n", densidadepopulacional);
            printf("PIB per Capita: %.3f\n", PIBpercapita);
            printf("inverso densidade é: %.2f\n", superpoder);
            
            printf("----------------------\n");

            // cidade n°2
            printf("Caracteristicas da Cidade B \n");
            
            printf("Carta B: %s\n", carta2);
            printf("Cidade B: %s\n", cidade2);
            printf("População B: %lu\n", população2);
            printf("PIB B: %.2f\n", PIB2);
            printf("Pontos Turisticos B: %d\n", Pturisticos2);
            printf("Área B: %.2f km²\n", área);
            printf("Densidade Populacional: %2.f\n", densidadepopulacional2);
            printf("PIB per Capita: %.3f\n", PIBpercapita);
            printf("inverso densidade é: %.2f\n", superpoder2);
            
            //resultados das comparações
            printf("Populacao: Carta 1 venceu (%d)\n", população > população2);
            printf("Area: Carta 1 venceu (%d)\n", área > área2);
            printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
            printf("Pontos Turisticos: Carta 1 venceu (%d)\n", Pturisticos > Pturisticos2);
            printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional > densidadepopulacional2);
            printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita > PIBpercapita2);
            printf("Super Poder: Carta 1 venceu (%d)\n", superpoder > superpoder2);


            return 0;

    }
