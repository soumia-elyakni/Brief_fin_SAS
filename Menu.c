#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Bienvenue sur le systeme bancaire");
    
    char CIN[9] ;
    char nom[30] ;
    char prenom[30] ;
    float montant;
    int i, nombre;
    int choix;

    menu :
    printf("1-Ajouter un client\n");
    printf("2-Ajouter plusieurs clients\n");
    printf("3-Affichier la liste des clients\n");
    printf("4-Rechercher un client\n");
    printf("5-Fidelisation \n");
    printf("6-EXIT\n");
    printf("Saisez le choix : ");
    scanf("%d", &choix);
    system("cls");

    switch (choix)
    {
    case 1:{
        printf("saisissez le numero du CIN : ");
        scanf("%s", &CIN);

        printf("Saisissez le NOM : ");
        scanf("%s", &nom);
        printf("Saisissez le Prenom : ");
        scanf("%s", &prenom);

        printf("Saisissez le Montant initial : ");
        scanf("%f", &montant);
        system("cls");
            goto menu;
        
    }
        break;
    case 2 :{
        printf("Saisissez combien engistrer : ");
        scanf("%d", &nombre);
        for(i = 0; i < nombre; i++){
            printf("Saisissez le numero du CIN : ");
        scanf("%s", &CIN);

        printf("Saisissez le NOM : ");
        scanf("%s", &nom);
        printf("Saisissez le Prenom : ");
        scanf("%s", &prenom);

        printf("Saisissez le Montant initial : ");
        scanf("%f", &montant);
        system("cls");
        }
            system("cls");
            goto menu;
    }
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
    case 6 : 
    printf("vous avez quitter le programme");
        break;   

    default:
        goto menu;
        break;
    }
    return 0;
}