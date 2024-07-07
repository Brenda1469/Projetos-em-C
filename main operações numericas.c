/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int num1=0;
  int num2=0;
  int opc=0;
  int soma=0;
  int sub=0;
  int mut=0;
  float divi=0;
  int sai=0;
  char c;
  
  
  
  do{ 
      printf("Digete o valor do primeiro numero: \n");
      scanf("%d", &num1);
      printf("Digete o valor do segundo numero: \n");
      scanf("%d", &num2);  
      
      
      printf("Escolha uma opcao \n");
      printf("Opcao 1 = soma \n");
      printf("Opcao 2 = subtracao \n");
      printf("Opcao 3 = mutplicacao \n");
      printf("Opcao 4 = divisao \n");
      printf("Opcao 5 = saida \n");
      scanf("%d", &opc);
      
      if(opc==1){
       
      soma=num1+num2;
      printf("O resultado da soma e %d: \n",soma); }
      else if (opc==2&&num2>=0){
      
      sub=num1-num2;
       printf("O resultado da subtracao e %d: \n",sub);}
      else if(opc==3){
      
      mut=num1*num2;
      printf("O resultado da mutiplicacao e %d: \n",mut); }
      else if(opc==4&&num2!=0){
      
      divi=(float)num1/(float)num2;
      printf("O resultado da divi e %f: \n",divi); }
      
      else if(opc==5){printf("Fim");
      break;
      }
     
      printf("Deseja continuar: (s/n)");
      scanf(" %c", &c);
      
  }while(c=='s'||c=='S');
   
    return 0;
}
