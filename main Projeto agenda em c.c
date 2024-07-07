#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3
struct tipo_pessoa{
  int idade;
  char tell[1000];//o char ler letras, números, símbolos de pontuação, entre outros.\\
  
  char nome[1000];
};

typedef struct tipo_pessoa tipo_pessoa;

void limpar(){
 int c;
while((c=getchar())!='\n' && c!=EOF); 
}//essa funçao limpa o buffer\\

int main()
{ char c;
 FILE *arquivo; //ponteiro, o ponteiro vai acessar o arquivo que vamos manipular\\

    arquivo = fopen("contatos.txt", "w"); // Abre o arquivo para escrita

if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;}
do{
  tipo_pessoa lista[TAM];
  int i;

for(i=0;i<TAM;i++){
      
  printf("Insira os dados dos contatos:\n");
  puts("Digete o nome:\n");
  scanf("%1000[^\n]s",lista[i].nome);    
  limpar();    

  puts("Digete a idade:\n");   
  scanf("%d",&lista[i].idade);
  limpar();  

  puts("Digete o numero de telefone:\n");
  scanf("%1000[^\n]s",lista[i].tell);    
  limpar();    
}
 printf("Dados:\n");
for(i=0;i<TAM;i++){
 //atraves do ponteiro o dado sera salvo\\
 
  fprintf(arquivo,"Nome: %s \n",lista[i].nome);
  fprintf(arquivo,"Idade: %d \n",lista[i].idade);
  fprintf(arquivo,"Numero: %s \n",lista[i].tell);
  fprintf(arquivo,"\n");}

printf("Deseja continuar anotando contatos ? (s/n)");
scanf(" %c", &c);
limpar();      
}while(c=='s'||c=='S');
 
fclose(arquivo);//fecha o arquivo\\


    
return 0;}

