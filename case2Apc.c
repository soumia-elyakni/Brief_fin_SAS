#include<stdio.h>
#include<stdlib.h>


int main()
{
    char CIN[9] ;
    char nom[30] ;
    char prenom[30] ;
    float montant;
    int i, nombre;
 
//  step :
 printf("Saisez combien engistrer : ");
 scanf("%d", &nombre);
 for(i = 0; i < nombre; i++){
    printf("entrer le numero du CIN : ");
   scanf("%s", &CIN);

   printf("entrer le NOM : ");
   scanf("%s", &nom);
   printf("entrer le Prenom : ");
   scanf("%s", &prenom);

   printf("entrer le Montant initial : ");
   scanf("%f", &montant);
 }

//    printf("encore un client ?");
//    printf("0-Menu");
//    printf("1-Oui");
//    scanf("%d", &encore);

//   while(encore != 0){
    // goto step;
    return 0;

}