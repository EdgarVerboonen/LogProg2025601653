#include <stdio.h>
#include <math.h>

int main()
{
    float l1=7,l2=(7*3)/5.0,l3=7/5.0,pt,at,perc,areacir;
    //Perimetro
    perc = (3.1416*l1)/2;
    pt = (17*l3) + perc + (l2*2);

    //Area
    areacir = (3.1416*pow(l1,2)/4)/2;

    at = (l1*l1)+((l3*l3)*2)+((l3*l2)*2)+areacir;

    printf("Perimetro Total = %f",pt);
    printf("\n");
    printf("Area Total = %f",at);

    return 0;
}
