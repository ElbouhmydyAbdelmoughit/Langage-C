#include <stdio.h>
#include <math.h>

int main()
{
    float Cir,Long,Larg;

    printf("Entrez Longueur et Largeur \n");
    scanf("%f%f",&Long,&Larg);

    Cir =2*(Long + Larg);
     printf("la circonférence est :%f ",Cir);
    return 0;
}