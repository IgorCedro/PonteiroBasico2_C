#include<stdio.h>
#include<locale.h>

void entrada(int *pnum, int *ptermos)
{
    printf("Digite a quantidade de termos: \n");
    scanf("%d",&*ptermos);

    for(int i = 0; i < *ptermos; i++)
    {
        printf("Digite um n�mero inteiro qualquer: \n");
        scanf("%d",&*pnum);

        pnum++;
    }
}
main()
{
/*
  Utilizando ponteiros, solicite a quantidade de termos que deseja inserir e, em seguida, insira a quantidade especificada de n�meros inteiros.
*/

    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int continuar, num[10], termos;
    int *pnum, *ptermos;

    //Loop para repetir o programa
    do
    {
        //Atribuindo ao ponteiro o endere�o da variavel char letra
        pnum = &num[0];
        ptermos = &termos;

        //Entrada de dados
        entrada(pnum, &termos);//Passa como par�metro o endere�o das vari�veis

        //Opera��es
        //operacoes();//Passa como par�metro o endere�o das vari�veis

        printf("\n");//Pula a linha

        //Exibi��o
        for(int i = 0; i < termos; i++)
        {
            printf("O valor de num na posi��o %d �: %d \n", i, num[i]);
        }

        printf("\n");//Pula a linha

        //Loop para validar a sa�da do programa
        do
        {
            printf("Se deseja continuar, digite '1'. \n");
            printf("Se deseja sair, digite '0'. \n");
            scanf("%d",&continuar);
        }
        while(continuar !=0 && continuar !=1);//Verifica se o n�mero � diferente de 0 e 1

        system("cls");//Limpa a tela
    }
    while(continuar==1);//Programa reinicia se a variaver 'continuar' ter valor 1
}
