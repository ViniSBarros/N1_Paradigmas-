#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arremesso_de_peso();
void ginastica_artistica();

int main(){

int opcao = 1;

while (opcao != 0)
{
    printf("----------MENU----------\n");
    printf("Escolha uma opção: \n");
    printf("\n1- Arremesso de peso \n2- Ginástica artística\n0- Sair ");
    printf("\n------------------------\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 0:
        return 0;
        break;

    case 1:
        arremesso_de_peso();
        break;

    case 2:
        ginastica_artistica();
        break;

    default:
        printf("\nOpção Inválida\n\n");
        break;
}
}

return 0;
}

void arremesso_de_peso() {

char nome1[20], nome2[20];
float atleta1[3], atleta2[3], maior1 = 0, desempate1, maior2 = 0, desempate2;

getchar();//pega o "/n" para que o fgets funcione corretamente 
printf("\nInforme o nome do(a) primeiro atleta: ");
fgets(nome1, 20, stdin);

//pede os 3 arremessos do primeiro atleta de uma vez só
printf("\nVez de %s", nome1);
printf("Informe a distância do 1º, 2º e 3º arremessos em metros, respectivamente: ");
scanf("%f %f %f", &atleta1[0], &atleta1[1], &atleta1[2]);

//separa e salva o maior e o segundo maior arremesso nas suas respectivas variáveis
for (int i = 0; i < 3; i++)
{
    printf("\narremesso[%d] = %.2f", (i + 1), atleta1[i]);

    if (atleta1[i] > maior1)
    {
        desempate1 = maior1;
        maior1 = atleta1[i];

        if (maior1 == atleta1[0])
        {
            desempate1 = atleta1[1];
        }       
    }    
    if (desempate1 < atleta1[2] && atleta1[2] < maior1)
        {
            desempate1 = atleta1[2];
        } 
}

getchar();//pega o "/n" para que o fgets funcione corretamente 
printf("\n\nInforme o nome do(a) segundo atleta: ");
fgets(nome2, 20, stdin);

//pede os 3 arremessos do segundo atleta de uma vez só
printf("\nVez de %s", nome2);
printf("Informe a distância do 1º, 2º e 3º arremessos em metros, respectivamente: ");
scanf("%f %f %f", &atleta2[0], &atleta2[1], &atleta2[2]);

//separa e salva o maior e o segundo maior arremesso nas suas respectivas variáveis
for (int i = 0; i < 3; i++)
{
    printf("\narremesso[%d] = %.2f", (i + 1), atleta2[i]);

    if (atleta2[i] > maior2)
    {
        desempate2 = maior2;
        maior2 = atleta2[i];

        if (maior2 == atleta2[0])
        {
            desempate2 = atleta2[1];
        }       
    }    
    if (desempate2 < atleta2[2] && atleta2[2] < maior2)
        {
            desempate2 = atleta2[2];
        } 
}

//if's com os possiveis resultados da competição
if (maior1 > maior2)
{
    printf("\n\nCom um arremesso de %.2f metros e uma vantagem de %.2f metros em relação ao seu oponente, o vencedor foi %s", maior1, (maior1 - maior2), nome1);
}
    else if (maior1 < maior2)
    {
    printf("\n\nCom um arremesso de %.2f metros e uma vantagem de %.2f metros em relação ao seu oponente, o vencedor foi %s", maior2, (maior2 - maior1), nome2);
    }
        else if (maior1 == maior2)
        {
            if (desempate1 > desempate2)
            {
                printf("\n\nNo desempate, com um arremesso de %.2f metros e uma vantagem de %.2f metros, o vencedor foi %s", desempate1, (desempate1 - desempate2), nome1);
            }
            else if (desempate1 < desempate2)
            {
                printf("\n\nNo desempate, com um arremesso de %.2f metros e uma vantagem de %.2f metros, o vencedor foi %s", desempate2, (desempate2 - desempate1), nome2);
            }
            else if (desempate1 == desempate2)
            {
                printf("\n\nOs juizes declararam EMPATE\n");
            } 
        }
printf("\n");
}

void ginastica_artistica() {

char nome1[20], nome2[20];
float atleta1[5], atleta2[5], menor1, menor2, total1, total2;

getchar();//pega o "/n" para que o fgets funcione corretamente 
printf("\nInforme o nome do(a) primeiro atleta: ");
fgets(nome1, 20, stdin);

//pede as 5 notas do primeiro atleta de uma vez só
printf("\nVez de %s", nome1);
printf("Informe a 1º, 2º, 3º, 4º e 5º notas recebidas, respectivamente: ");
scanf("%f %f %f %f %f", &atleta1[0], &atleta1[1], &atleta1[2], &atleta1[3], &atleta1[4]);

menor1 = atleta1[0];

//faz a soma de todas as notas e subtrai a menor nota
for (int i = 0; i < 5; i++)
{
    printf("\nNota[%d] = %.1f", (i + 1), atleta1[i]);

    if (atleta1[i] < menor1)
    {
        menor1 = atleta1[i];
    }
    total1 = total1 + atleta1[i];
}
total1 = total1 - menor1;

getchar();//pega o "/n" para que o fgets funcione corretamente 
printf("\n\nInforme o nome do(a) segundo atleta: ");
fgets(nome2, 20, stdin);

//pede as 5 notas do segundo atleta de uma vez só
printf("\nVez de %s", nome2);
printf("Informe a 1º, 2º, 3º, 4º e 5º notas recebidas, respectivamente: ");
scanf("%f %f %f %f %f", &atleta2[0], &atleta2[1], &atleta2[2], &atleta2[3], &atleta2[4]);

menor2 = atleta2[0];

//faz a soma de todas as notas e subtrai a menor nota
for (int i = 0; i < 5; i++)
{
    printf("\nNota[%d] = %.1f", (i + 1), atleta2[i]);

    if (atleta2[i] < menor2)
    {
        menor2 = atleta2[i];
    }
    total2 = total2 + atleta2[i];
}
total2 = total2 - menor2;

printf("\n\ntotal do primeiro %.1f", total1);
printf("\ntotal do segundo %.1f", total2);

//if's com os possiveis resultados da competição
if (total1 > total2)
{
    printf("\n\nCom uma nota de %.1f e uma vantagem de %.1f, o vencedor foi %s\n", total1, (total1 - total2), nome1);
}
else if (total1 < total2)
{
    printf("\n\nCom uma nota de %.1f e uma vantagem de %.1f, o vencedor foi %s\n", total2, (total2 - total1), nome2);
}
else if (total1 == total2)
{
    printf("\n\nOs juizes declararam EMPATE\n");
}
}