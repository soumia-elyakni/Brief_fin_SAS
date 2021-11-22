#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Bienvenue sur le systeme bancaire");

    int choix;

    printf("1-Ajouter un client");
    printf("2-Ajouter plusieurs clients");
    printf("3-Affichier la liste des clients");
    printf("4-Rechercher un client");
    printf("5-EXIT");

    Scanf("%d", &choix);

    switch (choix)
    {
    case '1'/* constant-expression */:
        /* code */
        break;
    case '2'/* constant-expression */:
        /* code */
        break;
    case '3'/* constant-expression */:
        /* code */
        break;
    case '4'/* constant-expression */:
        /* code */
        break;    
    case '5'/* constant-expression */:
        /* code */
        break;   

        
    default:
        break;
    }
    return 0;
}