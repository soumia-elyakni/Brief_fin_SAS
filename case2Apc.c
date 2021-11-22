#include <stdio.h>
#include<stdlib.h>


int main()
{
    char CIN[9] ;
    char nom[30] ;
    char prenom[30] ;
    float montant;
    int i, nombre;
 
 menu :
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
    return 0;

}