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

struct info_client datab[100];
int i = 0;


 void ajouteruncmpte(){

         struct info_client Clt ;

        printf("saisissez le numero du CIN : ");
        scanf("%s", Clt.CIN);

        printf("Saisissez le NOM : ");
        scanf("%s", Clt.nom);
        printf("Saisissez le Prenom : ");
        scanf("%s", Clt.prenom);

        printf("Saisissez le Montant initial : ");
        scanf("%f", &Clt.montant);

        datab[i] = Clt ;
        i++;
 }
    
void ajouterdescmptes(){
         int i, nombre ;

        printf("Saisissez combien engistrer : ");
        scanf("%d", &nombre);
        for(i = 0; i < nombre; i++){
            ajouteruncmpte();
            system("cls");
        }
         
}

void afficherListeClients() {
    printf("Nombre de Client %i \n\n", i);
    for(int j = 0; j < i; j++){
        printf("Client %i : CIN: %s \t Nom: %s \t Prenom: %s \t Montant: %f \n", j+1, datab[j].CIN, datab[j].nom, datab[j].prenom, datab[j].montant);
    
    }
    
}
 

int main(){
 
int choix;

menu :

 printf("*******************Bienvenue sur le systeme bancaire******************** \n");
    
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
    afficherListeClients();
        int menu ;
        printf("saisissez un nombre retourner au menu");
        scanf("%d", &menu);
        system("cls");
        goto menu;
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