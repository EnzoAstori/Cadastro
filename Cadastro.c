#include <stdio.h>
#include <stdlib.h>

typedef struct {

char nome_completo[50];
char email[50];
char numero[15];
char cpf[12];

}Cadastro;

int main (void){

FILE *arquivo;
Cadastro cadastro;

printf("Digite o nome completo:");
fgets(cadastro.nome_completo,sizeof(cadastro.nome_completo),stdin);

printf("Digite o email completo: ");
fgets(cadastro.email,sizeof(cadastro.email),stdin);


printf("Digite o numero de celular: ");
fgets(cadastro.numero,sizeof(cadastro.numero),stdin);


printf("Digite o CPF: ");
fgets(cadastro.cpf,sizeof(cadastro.cpf),stdin);



arquivo = fopen("cadastro.txt","a");


if (arquivo == NULL){
printf("Erro ao abrir o arquivo");

return 1;
}

fprintf(arquivo,"Nome:%s",cadastro.nome_completo);
fprintf(arquivo,"E-mail:%s",cadastro.email);
fprintf(arquivo,"Numero:%s",cadastro.numero);
fprintf(arquivo,"CPF:%s",cadastro.cpf);
fprintf(arquivo, "\n---------------------");


fclose(arquivo);

printf("\nCadastro bem sucedido");


}
 