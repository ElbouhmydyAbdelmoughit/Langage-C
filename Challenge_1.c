#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char Prenom[20];
    int Age;
    char Sexe[10];
    char N_Telephone[15];

    printf("Entrer Votre name : \n");
    scanf("%s",&name);
    printf("Entre votre Prenom : \n");
    scanf("%s",&Prenom);
    printf("Entrer Votre Age : \n");
    scanf("%d",&Age);
    printf("Entre votre Sexe : \n");
    scanf("%s",&Sexe);
    printf("Entre votre telephone : \n");
    scanf("%s",&N_Telephone);
    printf("les information et : %s %s %d %s %s",name,Prenom,Age,Sexe,N_Telephone);

    return 0;
}