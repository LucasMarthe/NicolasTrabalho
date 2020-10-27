#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Functions
int menu();
void direcionamento(int escolha);
void Relatorio_Paciente();
void Alterar_Agendamento();
void Funcionarios();

int main()
{
    int escolha;
    escolha=menu();
    direcionamento(escolha);



    return 0;
}


int menu()
{
    int escolha;

    printf("[1] - Agendamento\n");
    printf("[2] - Relatorio de Paciente\n");
    printf("[3] - Alterar Agendamento\n");
    printf("[4] - Funcionarios\n");
    printf("[5] - Sair\n\n");
    scanf("%d", &escolha);
    system("cls");

    return (escolha);

}

void direcionamento(int escolha)
{
    if (escolha == 1)
    {
        printf("Agendamento");
    }
    else if (escolha == 2)
    {
        printf("Relatorio de Paciente");
    }
    else if (escolha == 3)
    {
        printf("Alterar Agendamento");
    }
    else if (escolha == 4)
    {
        printf("Funcionarios");
    }
    else if (escolha == 5)
    {
        printf("Programa finalizado");
    }
    else
    {
        printf("Digite uma entrada valida");
    }
}
