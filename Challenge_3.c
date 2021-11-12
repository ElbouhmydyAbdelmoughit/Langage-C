#include <stdio.h>
int main()
{
    float Mile;
    float KM;
    printf("Entre le numero :\n");
    scanf("%f",&KM);
    Mile = (KM/1000)*1.609;
    printf("le resultat est : %f",Mile);
    return 0;
}