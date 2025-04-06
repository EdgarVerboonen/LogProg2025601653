#include<stdio.h>
int main(){

    int tipoPizza, ingrediente;
    char* ingredientesVegetarianos[] = {"Pimiento", "Tofu"};
    char* ingredientesNoVegetarianos[] = {"Peperoni", "Jamon", "Salmon"};

    printf("Bienvenido a la pizzería Bella Napoli");
    printf("\n[1] Vegetarianos");
    printf("\n[2] No Vegetarianos");
    printf("\n[0] Salir del programa");
    printf("\nIntroduzca la pizza que guste: ");
    scanf("%d",&tipoPizza);

   if(tipoPizza==0){
    printf("\nSaliendo del programa...");
    printf("\n");
    return 1;
   }

   if(tipoPizza==1){
        printf("\nMenu de ingredientes vegetarianos: ");
        printf("\nIngredientes a elegir: ");
        printf("\n[1] Pimiento");
        printf("\n[2] Tofu");
        printf("\nElige un ingrediente: ");
        scanf("%d",&ingrediente);
        printf("Tu pizza es vegetariana y lleva: ");
        printf("Mozzarella, Tomate y ");
        if(ingrediente == 1){
                printf("%s", ingredientesVegetarianos[0]);
        }else if(ingrediente == 2){
                printf("%s", ingredientesVegetarianos[1]);
        }
        printf(".\n");
        }

        else if(tipoPizza==2){
        printf("\nMenu de ingredientes no vegetarianos: ");
        printf("\nIngredientes a elegir: ");
        printf("\n[1] Peperoni");
        printf("\n[2] Jamon");
        printf("\n[3] Salmon");
        printf("\nElige un ingrediente: ");
        scanf("%d",&ingrediente);
        printf("Tu pizza no es vegetariana y lleva: ");
        printf("Mozzarella, Tomate y ");
        if(ingrediente == 1){
                printf("%s", ingredientesNoVegetarianos[0]);
        }else if(ingrediente == 2){
                printf("%s", ingredientesNoVegetarianos[1]);
        }else if(ingrediente == 3){
                printf("%s", ingredientesNoVegetarianos[2]);
        }
        printf(".\n");
        }else{
            printf("\nOpcion no valida. Elige 1 para vegetariana o 2 para no vegetariana");
            printf(".\n");
        }




    return 0;
}

