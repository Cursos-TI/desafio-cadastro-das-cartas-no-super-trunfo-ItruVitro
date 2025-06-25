#include <stdio.h> //importe para entrada de dados
#include <locale.h> //importe para adicionar a localidade do sistema.

int main() {

   //Para pegar a lingua do sistema
    setlocale(LC_ALL, "");
    
    //Variaveis da Primeira Carta
    char estadoUm = 'C';
    char codigoDaCartaUm[5] = "000";
    char nomeDaCidadeUm[30] = "Recife";
    int populacaoDaCidadeUm = 0;
    float areaDaCidadeUm = 0.0;
    float pibDaCidadeUm = 0.0;
    int pontosTuristicosDaCidadeUm = 0;

    //Variaveis da Segunda Carta
    char estadoDois = 'B';
    char codigoDaCartaDois[5] = "000";
    char nomeDaCidadeDois[30] = "Recife";
    int populacaoDaCidadeDois = 0;
    float areaDaCidadeDois = 0.0;
    float pibDaCidadeDois= 0.0;
    int pontosTuristicosDaCidadeDois = 0;

    //Insercao de Dados da Primeira Carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &estadoUm);

    printf("Código: ");
    scanf("%s", codigoDaCartaUm);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nomeDaCidadeUm, sizeof(nomeDaCidadeUm), stdin);

    printf("População: ");
    scanf("%d", &populacaoDaCidadeUm);

    printf("Área: ");
    scanf("%f", &areaDaCidadeUm);

    printf("PIB: ");
    scanf("%f", &pibDaCidadeUm);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosDaCidadeUm);
    
        
    //Insercao de Dados da Segunda carta Carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &estadoDois);

    printf("Código: ");
    scanf("%s", codigoDaCartaDois);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nomeDaCidadeDois, sizeof(nomeDaCidadeDois), stdin);

    printf("População: ");
    scanf("%d", &populacaoDaCidadeDois);

    printf("Área: ");
    scanf("%f", &areaDaCidadeDois);

    printf("PIB: ");
    scanf("%f", &pibDaCidadeDois);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosDaCidadeDois);

    //Imprimindo todos os dados da primeria carta
     printf(
        "\nCarta 1:"
         "\nEstado: %c\n"  
         "Código: %s\n"  
         "Nome da cidade: %s" 
         "População: %d\n"  
         "Área: %.2fkm²\n"  
         "PIB: %.2f bilhões de reais\n"  
         "Número de pontos turísticos: %d\n", 
         estadoUm, codigoDaCartaUm, nomeDaCidadeUm, populacaoDaCidadeUm, areaDaCidadeUm, pibDaCidadeUm, pontosTuristicosDaCidadeUm);
    
    //Imprimindo todos os dados da segunda carta
     printf(
        "\nCarta 2:"
         "\nEstado: %c\n"  
         "Código: %s\n"  
         "Nome da cidade: %s" 
         "População: %d\n"  
         "Área: %.2fkm²\n"  
         "PIB: %.2f bilhões de reais\n"  
         "Número de pontos turísticos: %d\n", 
         estadoDois, codigoDaCartaDois, nomeDaCidadeDois, populacaoDaCidadeDois, areaDaCidadeDois, pibDaCidadeDois, pontosTuristicosDaCidadeDois);

    return 0;
}
