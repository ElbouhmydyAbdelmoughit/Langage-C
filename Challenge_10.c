#include <stdio.h>
#include <math.h>
int main()
{
    float r,cir,pi;
    pi=3.14;

    printf ("Entrez le r \n ");
    scanf("%f",&r);
    cir = 2*pi*r;

    printf("le cir est : %f",cir);
    return 0;
}