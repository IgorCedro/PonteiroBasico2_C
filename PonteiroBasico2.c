#include<stdio.h>
#include<locale.h>

void entrada(int *pnum, int *ptermos)
{
    printf("Digite a quantidade de termos: \n");
    scanf("%d",&*ptermos);

    for(int i = 0; i < *ptermos; i++)
    {
        printf("Digite um número inteiro qualquer: \n");
        scanf("%d",&*pnum);

        pnum++;
    }
}
main()
{
/*
  Utilizando ponteiros, solicite a quantidade de termos que deseja inserir e, em seguida, insira a quantidade especificada de números inteiros.
*/

    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int continuar, num[10], termos;
    int *pnum, *ptermos;

    //Loop para repetir o programa
    do
    {
        //Atribuindo ao ponteiro o endereço da variavel char letra
        pnum = &num[0];
        ptermos = &termos;

        //Entrada de dados
        entrada(pnum, &termos);//Passa como parâmetro o endereço das variáveis

        //Operações
        //operacoes();//Passa como parâmetro o endereço das variáveis

        printf("\n");//Pula a linha

        //Exibição
        for(int i = 0; i < termos; i++)
        {
            printf("O valor de num na posição %d é: %d \n", i, num[i]);
        }

        printf("\n");//Pula a linha

        //Loop para validar a saída do programa
        do
        {
            printf("Se deseja continuar, digite '1'. \n");
            printf("Se deseja sair, digite '0'. \n");
            scanf("%d",&continuar);
        }
        while(continuar !=0 && continuar !=1);//Verifica se o número é diferente de 0 e 1

        system("cls");//Limpa a tela
    }
    while(continuar==1);//Programa reinicia se a variaver 'continuar' ter valor 1
}
