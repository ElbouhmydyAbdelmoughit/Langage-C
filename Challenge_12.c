#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   char car[3];
   printf("Entrez les 3 caracters :/n");
   scanf("%s",&car);
   char N = car[0];
   car[0]=car[2];
   car[2]=N;
    printf("%.3s",car);
    return 0;
}
