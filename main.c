#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct Login{
	char login[10];
	char senha[10];
}Login;

typedef struct Contato{
	int telefone;
	char email[20];
}Contato;

typedef struct endereco{
	char rua[20];
	int casa;
	char bairro[15];
}Endereco;

typedef struct Funcionario {
	char nome[15];
	int matricula;
	Endereco endereco[0];
	Contato telefone[1];
	Login login[0];
}Fucionario;

typedef struct Curso{
	char nomeCurso[15];
	char siglaCurso[5];
}Curso;

typedef struct instituicao {  
	char nomeInstituicao[20];
	Endereco endereco[2];
	char CNPJ[10];
	Contato telefone[1];
	Curso cursos[4];
}Instituicao;

typedef struct aluno{
	char nomeAluno[20];
	int matricula;
	Curso curso[2];
	Instituicao	instituicao[2];  
}Aluno;

// variaveis globais
int opMenu; 
char loginAdmin[10] = "root";
char senhaAdmin[10] = "root";

// estruturas
//Funcionario funcionario[2];

// procedimentos
void menu();
void login();
void cadastrarFuncionario();

int main() {
	login();
 	return 0;
}

void login(){
	char testLogin[10];
	char testSenha[10];
	
	printf("\nLogin: ");
	fflush(stdin);
	gets(testLogin);
	printf("\nSenha: ");
	fflush(stdin);
	gets(testSenha);
		
		
		
	if ( strcmp(testLogin, loginAdmin) != 0 || strcmp(testSenha, senhaAdmin) != 0  ) {
		do{
			system("cls");
			
			printf("\nUsuario ou senha incorreto - Tente novamente!");
			printf("\nlogin: ");
			fflush(stdin);
			gets(testLogin);
				
			printf("\nSenha: ");
			fflush(stdin);
			gets(testSenha);
				
		}while( strcmp(testLogin, loginAdmin) != 0 || strcmp(testSenha, senhaAdmin) != 0  );
	}
	
	printf("\nBem vindo administrador");
	sleep(2);
}

void menu(){
	do{
		system("cls");
		printf("\nBem vindo ao sistema!");
		printf("\nEscolha uma opção!");
		printf("\n1 - Cadastrar funcionario.");
		printf("\n2 - Cadastrar curso.");
		printf("\n3 - Cadastrar instituicao.");
		printf("\n4 - Emprestar aluno.");
		printf("\n0 - Sair do sistema.\n---> ");
		scanf("%d",&opMenu);
		
		switch(opMenu) {
			case 1:
				//cadastrarFuncionario();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 0:
				break;
		}
		
	}while(opMenu != 0);	
}
