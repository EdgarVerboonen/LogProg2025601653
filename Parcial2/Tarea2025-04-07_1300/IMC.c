#include<stdio.h>
#include<math.h>

int main(){

    float p,e,imc;

    printf("Introduzca su peso: ");
    scanf("%f",&p);
    printf("\nIntroduzca su estatura: ");
    scanf("%f",&e);

    if (p <= 0 || e <= 0) {
        printf("Error: El peso y la estatura deben ser valores positivos\n");
        return 1;
    }

    imc = p/(pow(e,2));

    printf("\nSu indice de masa es: %.2f",imc);

    if(imc<=18.4){
        printf("\nBajo peso");
    }
    else if(imc>=18.5 && imc<=25.9){
        printf("\nNormal");
    }
    else if(imc>=25.0 && imc<=29.9){
        printf("\nSobrepeso");
    }
    else if(imc>=30.0 && imc<=34.9){
        printf("\nObesidad clase 1");
    }
    else if(imc>=35.0 && imc<=39.9){
        printf("\nObesidad clase 2");
    }
    else if(imc>=40.0){
        printf("\nObesidad clase 3");
    }



    return 0;

}
