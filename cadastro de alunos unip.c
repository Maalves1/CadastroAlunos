/*
Programa para c�lculo da m�dia de notas dos alunos e m�dia da turma
Desenvolvedores: F�bio Botelho, Fernanda Alencar, T�rek Adriel de Ara�jo Saleh, Marcelo Alves, Julio Severino e Cristiane Alves Santos de Oliveira.
Data: 13/11/2016.
*/

#include <stdio.h>

//� respons�vel pela convers�o de strings para n�meros, gerenciamento de aloca��o din�mica na memoria e o uso da fun��o system().
#include <stdlib.h>

//usado para incluir as cores
#include <conio.h>

//usado para ler acentua��o gr�fica
#include <locale.h>

//para gerar a hora do sistema
#include<time.h>


// Declara��o de vari�veis
int  repetir = 1; // flag para permanecer na repeti��o mostrando o menu principal
char op; // para a estrutura switch case

// Pesos das notas
double peso1 = 1;
double peso2 = 2;
double peso3 = 3;
double peso4 = 4;
double calculo = 0;

// Tipo de dado aluno
// Os pesos ser�ao atribu�dos no pr�prio c�digo para efeito do c�lculo da m�dia.
struct Alunos {
char nome[20];
int matricula;
double p1;
double p2;
double p3;
double p4;
double sub;
double media;
double mediaturma;
};

struct Alunos alunos[1000]; // array de alunos com at� 50 posi��es do 0 a 49

// Inicializa o array com espa�os em branco e zero
int main(){

   //C�digo para definir o tamanho do buffer (tela) de acordo com o texto do programa.
system("mode con:cols=80 lines=25");

  //C�digo para leitura da acentua��o gr�fica
  setlocale(LC_ALL, "Portuguese");
	int y;
{printf("          Data: %s                                  Hora:%s",__DATE__,__TIME__);}
    printf(" \n          %c--------------------------------------------------------------%c\n",270,270);
    printf("          |               Universidade Paulista - UNIP                   |\n");
    printf("          |       Curso de An�lise e Desenvolvimento de Sistemas         |\n");
    printf("          |             Disciplina T�cnicas de Programa��o               |\n");
    printf("          %c--------------------------------------------------------------%c\n",270,270);

    printf("\n\n\n\tAVISO: Antes de utilizar o nosso sistema, siga as instru��es abaixo:");
    printf("\n\n\n 1�: Nesta tela, preencha o n�mero de alunos que deseja cadastrar.");
    printf(" \n 2�: Na op��o 1 do menu, cadastre o(s) alunos, com o nome e a matr�cula. ");
    printf("\n 3�: Na op��o 2 do menu, cadastre as notas dos respectivos alunos.");
    printf("  \n 4�: Na op��o 3 do menu, se quiser, poder� alterar o peso das notas.");
    printf("  \n 5�: Na op��o 4 do menu, ir� ocorrer o calculo das notas preenchidas.");
    printf("  \n 6�: Na op��o 5 do menu, exibir� as m�dias dos alunos e turma.");
    printf("  \n 7�: Na op��o 6 do menu, ser� encerrado o programa.");

    printf("\n\n\n\n\tQuantos alunos deseja cadastrar? "); // Selecionar o n�mero de alunos que deseja.
        	    system("color 1C"); // Cor do menu fundo azul, letras vermelhas.
    scanf("%d", &y);

    int x=0;
    for(x=0; x<y; x++) {


    //alunos[x].nome = {'','','','','',''};
    alunos[x].matricula = 0;
    alunos[x].p1 = 0.0;
    alunos[x].p2 = 0.0;
    alunos[x].p3 = 0.0;
    alunos[x].p4 = 0.0;
    alunos[x].sub = 0.0;
    alunos[x].media = 0.0;
    alunos[x].mediaturma = 0.0;
}
// Estrutura de Repeti��o para o menu principal.
// Repetir� at� op��o 6(sair) ser digitada.

    while (repetir == 1) {
	system("color 4B"); // Cores fundo vermelho e letra azul claro.


// Exibir a data e a hora puxada do sistema
{
printf("          Data: %s                                  Hora:%s",__DATE__,__TIME__);
}
// Menu de op��es


printf(" \n          %c--------------------------------------------------------------%c\n",270,270);
    printf("          |               Universidade Paulista - UNIP                   |\n");
    printf("          |       Curso de An�lise e Desenvolvimento de Sistemas         |\n");
    printf("          |             Disciplina T�cnicas de Programa��o               |\n");
    printf("          %c--------------------------------------------------------------%c\n",270,270);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("                                 Controle de Notas\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\tSeja bem-vindo ao menu, escolha uma das op��es:\n");
    printf("\n");
    printf("<1> Cadastro de alunos\n");
    printf("<2> Cadastro de notas\n");
    printf("<3> Alterar pesos (O padr�o �: p1=1, p2=2, p3=3 e p4=4)\n");
    printf("<4> C�lculo das m�dias\n");
    printf("<5> Relat�rio de desempenho\n");
    printf("<6> sair\n");
    scanf ("%c",&op);
    


        switch (op)
{
    case '1':
    	        	    system("color E9"); // Cores fundo amarelo e letra azul forte.

    // Cadastro de alunos
    // Entre em um la�o de 0 a 49 para cadastrar alunos e suas matr�culas
            system("cls");

{printf("          Data: %s                                  Hora:%s",__DATE__,__TIME__);}
printf("                 %c--------------------------------------------------------------%c\n",270,270);
    printf("           |               Universidade Paulista - UNIP                   |\n");
    printf("           |       Curso de An�lise e Desenvolvimento de Sistemas         |\n");
    printf("           |             Disciplina T�cnicas de Programa��o               |\n");
    printf("           %c--------------------------------------------------------------%c\n",270,270);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("Cadastro de Alunos\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");

                //Inserindo os dados do aluno

				for (x=0; x<y; x++) {


                fflush(stdin);

                printf("->Entre com o nome do aluno %d :  ",x+1); // Cadastro do(s) aluno(s).
                fflush(stdin);
                gets(alunos[x].nome);
                printf("->Entre com a matr�cula do aluno %d :  ",x+1); // Cadastro da(s) matr�cula(s).
                scanf("%d", &alunos[x].matricula);



printf("  -------------------------------------------\n");
printf("  | Nome do aluno: %s                    \n ",alunos[x].nome); // Exibi��o do Cadastro do(s) aluno(s).
printf(" | Matr�cula do aluno: %d                \n",alunos[x].matricula); // Exibi��o do Cadastro da(s) matr�cula(s).
printf("  -------------------------------------------\n\n");



                }
    break;
    case '2':
    	    	        	    system("color 0E"); // Cores fundo preto e letra amarelo.
    // Cadastro de notas

    // Cadastro de notas
      //Entre em um la�o de 0 a 49 para cadastrar alunos e suas matr�culas
      system("cls");
{printf("          Data: %s                                  Hora:%s",__DATE__,__TIME__);}
printf("                 %c--------------------------------------------------------------%c\n",270,270);
    printf("           |               Universidade Paulista - UNIP                   |\n");
    printf("           |       Curso de An�lise e Desenvolvimento de Sistemas         |\n");
    printf("           |             Disciplina T�cnicas de Programa��o               |\n");
    printf("           %c--------------------------------------------------------------%c\n",270,270);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("Cadastro de Notas\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");

                for (x=0; x<y; x++) {


                fflush(stdin);
                printf("\nAluno %d: %s\n",x+1, alunos[x].nome);   // Exibindo o nome do aluno cadastrado na op��o(case) 1.
                printf("Matr�cula: %d\n", alunos[x].matricula); // Exibindo o n�mero da matr�cula cadastrada na op��o(case) 1.
                printf("\nNota 1:   "); // Escreva a Nota da prova 1.
                scanf("%lf", &alunos[x].p1);
                printf("Nota 2:   "); // Escreva a Nota da prova 2.
                scanf("%lf", &alunos[x].p2);
                printf("Nota 3:   "); // Escreva a Nota da prova 3.
                scanf("%lf", &alunos[x].p3);
                printf("Nota 4:   "); // Escreva a Nota da prova 4.
                scanf("%lf", &alunos[x].p4);
                printf("Nota Substitutiva: "); // Escreva a Nota da prova substitutiva.
                scanf("%lf", &alunos[x].sub);
                 printf("*---------------------------------------------------------------------*\n");
                  printf("*---------------------------------------------------------------------*\n");

}

                break;

    case '3':
    	    	    	        	    system("color 3A"); // Cores fundo verde e letra verde claro.
    	system ("cls");
     //Alterar Pesos. Padr�o : peso1 = 1 , peso2 = 2 , peso3 = 3 , peso4 = 4
	printf("\nDefina o peso da prova 1:\a");
scanf("%lf",&peso1);
	printf("Defina o peso da prova 2:\a");
scanf("%lf",&peso2);
	printf("Defina o peso da prova 3:\a");
scanf("%lf",&peso3);
	printf("Defina o peso da prova 4:\a");
scanf("%lf",&peso4);
                break;

    case '4':
    	    	    	    system("color 1F");  // Cores fundo azul escuro e letra branca.
    // C�lculo das m�dias
    // Supondo que a matriz alunos est� preenchida com as notas, inclusive a sub
    // A nota sub substituir� a menor nota

    system("cls");
{printf("           Data: %s                                  Hora:%s",__DATE__,__TIME__);}
printf("                %c--------------------------------------------------------------%c\n",270,270);
    printf("           |               Universidade Paulista - UNIP                   |\n");
    printf("           |       Curso de An�lise e Desenvolvimento de Sistemas         |\n");
    printf("           |             Disciplina T�cnicas de Programa��o               |\n");
    printf("           %c--------------------------------------------------------------%c\n",270,270);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Calculando m�dias...\n");    // Efetuando o calculo das m�dias.
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    float menor = 11; // Nota menor com flag de inicializa��o a ser substituida pela sub
    int menor_nota = 0; // (valores entre 1 a 4 fazendo referencia da
    // seguinte forma: p1 -> 1 , p2 -> 2, p3 -> 3, p4 -> 4

        for (x=0; x<y; x++) {

    // Verifica a menor nota do aluno entre as notas p1, p2, p3 e p4, se a nota substitutiva for inferior a qualquer outra o programa n�o substitui e mant�m a maior.

  if(alunos[x].p1<alunos[x].p2 && alunos[x].p1<alunos[x].p3 && alunos[x].p1<alunos[x].p4 && alunos[x].p1<alunos[x].sub)
     alunos[x].p1=alunos[x].sub;
  else
  if(alunos[x].p2<alunos[x].p3 && alunos[x].p2<alunos[x].p4 && alunos[x].p2<alunos[x].sub)
     alunos[x].p2=alunos[x].sub;
  else
  if(alunos[x].p3<alunos[x].p4 && alunos[x].p3<alunos[x].sub)
    alunos[x].p3=alunos[x].sub;
  else
  if(alunos[x].p4<alunos[x].p1 && alunos[x].p4<alunos[x].p2 && alunos[x].p4<alunos[x].p3 && alunos[x].p4<alunos[x].sub)
    alunos[x].p4=alunos[x].sub;


        //Condi��o adicionada para substituir a menor nota, sua leitura �: Se nota da prova1 for menor que nota prova 2..., ent�o a nota da prova 1 ser� igual a nota substitutiva.


        // Neste ponto estamos considerando o peso das notas baseado no seguinte:
        // p1 com peso1, p2 com peso2, p3 com peso3, p4 com peso4
        // A soma de peso1 + peso2 + peso3 + peso4 d� 10

alunos[x].media = ( (alunos[x].p1 * peso1) + (alunos[x].p2 * peso2) + (alunos[x].p3 * peso3) + (alunos[x].p4 * peso4)) / 10; // M�dia Ponderada dos alunos
//Verificando se a m�dia do aluno � maior que 10, caso seja o sistema vai assumir como m�dia 10 para o aluno
if (alunos[x].media > 10){
    alunos[x].media = 10;
}
}

    printf("\n M�dias calculadas .\n");   // M�dias dos alunos calculadas.
    printf("\nTecle algo para continuar...\n");
    system("pause");

            break;
    case '5':
    			    	    	    	    	        	    system("color F1"); // Cores fundo branco e letra azul forte.
                                        // Menu inicial mais o Relat�rio de desempenho

            system("cls");
{printf("           Data: %s                                  Hora:%s",__DATE__,__TIME__);}
printf("\n           %c--------------------------------------------------------------%c\n",270,270);
    printf("           |               Universidade Paulista - UNIP                   |\n");
    printf("           |       Curso de An�lise e Desenvolvimento de Sistemas         |\n");
    printf("           |             Disciplina T�cnicas de Programa��o               |\n");
    printf("           %c--------------------------------------------------------------%c\n",270,270);
            printf("\n");
            printf("\t\t\t\tRelatorio de Desempenho\n"); // Retorna a mensagem Relat�rio.
            printf("\n");

                for (x=0; x<y; x++) {

                fflush(stdin);

printf("%c-----------------------------------------------------------------------------%c\n",270,270);
printf("  O(A) aluno(a)%s", alunos[x].nome);  // O aluno (nome).
printf(" de n�mero de matr�cula  %d",alunos[x].matricula); // De matr�cula (matr�cula).
printf(" obteve a m�dia %4.1f \n", alunos[x].media); // Obteve a m�dia igual a (m�dia).
printf("%c-----------------------------------------------------------------------------%c\n",270,270);

 //Se a media ponderada for mais que 5, retornara a mensagem aprovado, caso contrario, reprovado
 if( alunos[x].media >= 6.0 ) {
 
 printf("                               **Aluno aprovado**\n\n");
 }
 else 
 
 printf("                               *Aluno reprovado*\n\n");


}

    	for (x=0; x<y; x++){


			// Vari�vel CALCULO igual a soma dela mesma, com a m�dia da turma
            calculo = (calculo + alunos[x].media);

			}
			// Calculo da m�dia da turma, vari�vel y = n�mero de alunos cadastrados
			alunos[x].mediaturma = (calculo)/y;

			// Exibi��o em tela da m�dia da turma
	    	printf("\n\n\n\n	A m�dia da turma �: %4.1f\n\n\n\n\n",alunos[x].mediaturma);
	    	
	    	 //Se a da turma for mais que 6, retornara a mensagem de m�dia satisfat�ria, caso contrario, m�dia insatisfat�ria
 if( alunos[x].mediaturma >= 6.0 ) {
 
 printf("                    **A m�dia da turma foi satisfat�ria**\n\n");
 }
 else 
 
 printf("                     *A m�dia da turma foi insatisfat�ria*\n\n");

			// Pausar o sistema ap�s a exibi��o das m�dias
	    		system("pause");

            // Limpar a tela
                system("cls");


                    break;

    case '6':
    	        	    system("color 2E"); // Cor do menu fundo verde, letras amarelo.
    // Sair
    repetir = 0;
    system("cls");
    printf("OBRIGADO POR UTILIZAR O NOSSO SISTEMA DE CONSULTAS. VOLTE SEMPRE!\n\n");
	printf("\n\t\t\t\tDESENVOLVEDORES\n\n\n\n\n\n\n\t\t\t     |F�bio Botelho      |\n\t\t\t     |Fernanda Alencar   |\n\t\t\t     |T�rek Saleh        |\n\t\t\t     |Marcelo Alves      |\n\t\t\t     |Julio Severino     |\n\t\t\t     |Cristiane Alves    |\n\n\n\n\n");

    break;
    default:
    // N�o foi digitada nenhuma das op��es acima, retorna a mensagem de comando inv�lido

    printf("\nComando inv�lido!\n");
    printf("\nTente novamente....\n\n");
    system("cls");

                    break;
}
}

 // Fim da estrutura de repeti��o do menu principal

return 0;

}
