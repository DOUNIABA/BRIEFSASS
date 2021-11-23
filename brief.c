
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Comptebancaire{
char CIN[50];
char Nom[100];
char Prenom[100];
float Montant;
};

struct Comptebancaire compte;

        void creercompte(){
        FILE * C;
        C=fopen("comptes.txt","a");
        printf("entrez votre CIN :");
        scanf("%s", &compte.CIN);
        fprintf(C," %s \n",compte.CIN);
        fflush(stdin);
       
        printf("entrez votre nom :");
        scanf("%s",&compte.Nom);
        fprintf(C," \n %s \n ",compte.Nom);
        fflush(stdin);
         printf("entrez prenom :");
        scanf("%s", &compte.Prenom);
        fprintf(C,"\n %s \n",compte.Prenom);
        fflush(stdin);

        printf("entrez montant :");
        scanf("%f",&compte.Montant);
        fprintf(C,"\n %f \n",compte.Montant);
        fflush(stdin);
        fclose(C);
        printf("compte bien cree");
        }


       void AfficherCompte(){
        FILE * C;
        C=fopen("comptes.txt","r");

      
    do{
printf("\n=======INFOS SUR LE COMPTE======= \n");
fscanf(C," %s ",&compte.CIN);
printf("Nomero de CIN :%s \n",compte.CIN);
fflush(stdin);
fscanf(C," %s ",&compte.Nom);
printf("Nom de client :%s\n",compte.Nom);
fflush(stdin);
fscanf(C," %s ",&compte.Prenom);
printf("Prénom de client :%s\n",compte.Prenom);
fflush(stdin);
fscanf(C," %f ",&compte.Montant);
printf("MONTANT DE COMPTE:%f Dh\n.",compte.Montant );
fflush(stdin);}
while (!feof(C));
fclose(C);}

void rechercher(){
char Numrech;
FILE * C;
C =fopen("comptes.txt","a");
printf("donner un numero de recherche :");

do {

    if (compte.CIN==Numrech){
fscanf(C,"%s ,%s , %s , %f", &compte.CIN, &compte.Nom, &compte.Prenom, &compte.Montant);
fflush(stdin);

printf("CIN\t: %s" ,compte.CIN);
printf("CIN\t: %s", compte.Nom);
printf("CIN\t: %s", compte.Prenom);
printf("CIN\t: %f", compte.Montant);
}while (!feof(C));
fclose(C);
}
}

void supprimer(){
char CIN_RECH;
FILE * C;
C =fopen("comptes.txt","a");
printf("\n\n\n\tEntrez le CIN du client a effacer: ");
scanf("%s",CIN); 

if(CIN_RECH==CIN)
{
printf("\tLe fichier n'exiqte pas!!!\n",CIN_RECH);
}
else
{
printf("\n\tLe compte de %s  est bien efface.\n",CIN_RECH);
}
break;

}
}
int main(){
char choix ;
char qus;
do{
system("cls");
printf("\n Menu \n");
printf("1 Ajouter un nouveau compte");
printf("\n 2 Affichage des comptes");
printf("\n 3.Rechercher");
printf("\n 4. Supprimer");
printf("\n 5.Quitter");
do{
printf("\n Entrez votre choix:\t");
scanf("%d",&choix);
}while(choix<1 || choix>5);
switch(choix){
case 1:
creercompte();
break;
case 2:
AfficherCompte();
break;
case 3:
rechercher();
break;
case 3:
supprimer();
break;

}

printf("\n continuez ");
scanf("%s",&qus);
fflush(stdin);
}while (qus=='o' || qus=='O' );
return 0 ;
}
