#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
struct CartasSuperTrunfo
{ Char estado[3]
char codigo[10]
char nomeCidade[50]
int populacao;
float area;
float pib;
int pontosTuristicos;
float densidadepopulacional;
float PIBpercapita;

};

// Função para calcular os valores derivados
void calcularValores(struct Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
