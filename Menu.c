#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <windows.h>

struct info_client{
  char CIN[9];
  char nom[30];
  char prenom[30];
  float montant;
 };

 struct info_client Client;
 
 void ajouteruncmpte(){


        printf("saisissez le numero du CIN : ");
        scanf("%s", Client.CIN);

        printf("Saisissez le NOM : ");
        scanf("%s", Client.nom);
        printf("Saisissez le Prenom : ");
        scanf("%s", Client.prenom);

        printf("Saisissez le Montant initial : ");
        scanf("%f", &Client.montant);

}

void ajouterdescmptes(){
         int i, nombre ;

        printf("Saisissez combien engistrer : ");
        scanf("%d", &nombre);
        for(i = 0; i < nombre; i++){
             printf("saisissez le numero du CIN : ");
        scanf("%s", Client.CIN);

        printf("Saisissez le NOM : ");
        scanf("%s", Client.nom);
        printf("Saisissez le Prenom : ");
        scanf("%s", Client.prenom);

        printf("Saisissez le Montant initial : ");
        scanf("%f", &Client.montant);
        system("cls");
        }
         
}

int main(){
 
int choix;

 printf("Bienvenue sur le systeme bancaire");
    
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
    case 1:
             ajouteruncmpte();
            system("cls");
            goto menu;
        break;

    case 2 :
             ajouterdescmptes();
           system("cls");
            goto menu;
        break;

    case 3 :
    // listeclients.c / fonctions affichage;
        break;
    case 4 :
    // fonction de recherche;
     //infos de client +  printf("Quelle operations voulez-vous effectuer ?");
        // printf("1-retrait"); 
        // printf("2-depot"); 
        // scanf("%d, choix retrait depot ");
        // fonction d'operation;

        break;    
    case 5 : 
        // fonction fidélisation
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