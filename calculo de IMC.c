
#include <stdio.h>

int main()
{
    float alt=0;
    float peso=0;
    float imc=0;
    
    printf("Digete sua altura: \n");
    scanf("%f",&alt);
    printf("Digete seu peso: \n");
    scanf("%f",&peso);
    
    imc=peso/(alt*alt);
    
    printf("Seu IMC e: %f \n", imc);
    
    if(imc < 18.5){
    printf("Abaixo do peso");   
    } 
    
    else if(imc>=18.6 && imc<=24.9){
    printf("Saudavel");
    }
    else if(imc>=25.0 && imc<=29.9){
    printf("Peso em excesso");
    }
    else if(imc>=30.0 && imc<=34.9){
    printf("Obesidade grau I");
    }
    else if(imc>=35.0 && imc<=39.9){
    printf("Obesidade grau II (severa)");
    }
    else if(imc>=40.0){
    printf("Obesidade grau III(morbida)");
    }
    
    
    
   


    return 0;
}