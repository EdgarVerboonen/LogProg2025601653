#include <stdio.h>

int main()
{
    float r,r1;
    int x = 3;

    r = (1/2.0)*x + ((3+x)*(2*(x*x)))/2.0 ;
    r1 = r/((2+3)*(float)x);
    printf("r1 = %f",r1);

    return 0;
}
