#include <stdio.h>
#include <math.h>

int main()
{
    float l=7, pt , at, hipot,perc,att,ac,ar;

    hipot = sqrt(pow(l,2)+pow(3*l,2));
    perc = (3.1416*(l*3))/2;

    att = ((3*l)*l)/2;
    ac = (3.1416*pow(3*(l/2),2))/2;
    ar = 3*l*l;

    pt= (7*l)+(2*hipot)+perc;
    at= (att*2)+(ar*2)+ac;

    printf("Perimetro Total = %f",pt);
    printf("\n");
    printf("Area Total = %f",at);

    return 0;
}
