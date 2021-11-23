#include<stdio.h>
#include<stdlib.h>


int main()
{
    int choixOp;
    operation :
    printf("Quelle operation voulez-vous effectuer ?\n");
    printf("1-Depot \n");
    printf("2-retrait \n");
    printf("3-retour au informations de client \n");
    printf("4-retour au liste des clients \n");
    printf("5-retour au menu \n");

    scanf("%d",&choixOp);

switch (choixOp){
case 1 : 
fonction depot;
break;

case 2: 
fonction retrait;
break;

case 3: 
goto case 4 f lmenu;
break;

case 4: 
goto case 3 f lmenu;
break;

case 5: 
goto menu;
break;

default : 
goto operation;
break;

}
    return 0;
}