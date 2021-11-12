#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    float F;
    printf("Entre le numero C :\n");
    scanf("%d", &C);
    
    F=(C*1.8) + 32;
    
    printf("le resultat est %f",F);

    return 0;
}