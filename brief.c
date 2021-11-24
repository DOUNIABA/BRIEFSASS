
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Comptebancaire{
char CIN[50];
char Nom[100];
char Prenom[100];
char Montant[100];
};

struct Comptebancaire compte[100];
void creercompte()
{
 
for ( int i = 0;i<100;i++){
 printf("\nENTREZ CIN:");
 scanf("%s",compte[i].CIN); 
 printf("\nENTREZ LE NOM:");
 scanf("%s",compte[i].Nom);
 printf("\nENTREZ PRENOM:");

 scanf("%s",compte[i].Prenom); 
 printf("\nSOLDE :");

 scanf("%f",&compte[i].Montant);
 printf("\nBien ajouter:");
break ;
 }
}


   void RechercherCompte(){
    int arr[100];
    float CIN_RECH;
    int i;
    printf("Enter CIN: ");
    scanf("%s",CIN_RECH);

    for(i=0; i<100; i++){
    if(compte[i]==CIN_RECH){
        printf("%s",compte.CIN[i]);
        printf("%s",compte.Nom[i]);
        printf("%s",compte.Prenom[i]);
        printf("%f",compte.Montant[i]);

    }
    
    }
int main(){

int choix ;
int qus;
do{
system("cls");
printf("\n___________________Menu_____________________ \n");
printf(" [1] Ajout d'un nouveau compte");
printf("\n [2] Affichage des comptes");
printf("\n [3] Rechercher");            
printf("\n [4] pour retrait");
printf("\n [5] Quitter");
do{
printf("\n *Veuillez entrer le numero de votre choix:\t");
scanf("%d",&choix);
}while(choix<1 || choix>5);
switch(choix){
case 1:
creercompte();
break;
case 2:
RechercherCompte()
break;

case 3:


break;
case 4:

break;
}
printf("\n00 : menu : \n");
printf("0 : sortir :");
scanf("%d",&qus);
fflush(stdin);
}
while (qus==00);
return 0 ;
}
}