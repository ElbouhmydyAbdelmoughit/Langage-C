#include <stdio.h>
int main(){

    float F;
    float C;

    printf("Entre le numero F:\n");
    scanf("%f", &F);
    C = (F-32)/1.8;

    printf("la temperature est %f:\n", C);

    if(C<0)
        printf("la temperature et tres froid");
    else if(C<15)
        printf("la temperature et froid");
    else if(C<30)
        printf("la temperature et chaud");
    else 
        printf("la temperateur et tres chaud");
    return 0;
 }