//********************Case-3************************//

#include<stdio.h>
#include<stdlib.h>


int main()
{
 int choix2; 

   printf("La liste des clients \n ");
   
   printf("1- Affichage par ordre Accendant \n");
   
   printf("2- Affichage par ordre Deccendant: \n");

   printf("La liste des clients ayant un Montant superieur de 1000 MAD \n");

   printf("3- Affichage par ordre Accendant \n");
   
   printf("4- Affichage par ordre Deccendant \n");

   printf("5- Rechercher un client \n");

   scanf("%d", &choix2);

    system("cls");

    switch(choix2){
        case 1: 
        break; 

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;

        case 5: 
        printf("saisissez le CIN du client");
        scanf("%s", &CIN);
        // fonction d recherche 
        //infos de client +  printf("Quelle operations voulez-vous effectuer ?");
        // printf("1-retrait"); 
        // printf("2-depot"); 
        // scanf("%d, choix retrait depot ");
        // fonction d'operation;

        break;

        default: 
        goto menu;
        break;
    }
    return 0;

}
