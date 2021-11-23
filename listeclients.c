//********************Case-3************************//

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <windows.h>



int main()
{
int choix2;

   printf("La liste des clients \n ");
   
   printf("1- Affichage par ordre Accendant \n");
   
   printf("2- Affichage par ordre Deccendant: \n");

   printf("3- Rechercher un client \n");

   scanf("%d", &choix2);

    system("cls");

    switch(choix2){
        case 1: 
        struct info_client;
        break; 

        case 2:
        printf("jkgh");
        break;

        case 3:
        printf("jnjkfg");
        break;

        
        /*printf("saisissez le CIN du client");
        scanf("%s", &CIN);
        // fonction d recherche 
        //infos de client +  printf("Quelle operations voulez-vous effectuer ?");
        // printf("1-retrait"); 
        // printf("2-depot"); 
        // scanf("%d, choix retrait depot ");
        // fonction d'operation; */

        break;

        default: 
        printf("kjhfkhf");
        break;
    }
    return 0;

}
