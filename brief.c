
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
        fprintf(C," %s ",compte.CIN);
        fflush(stdin);
       
        printf("entrez votre nom :");
        scanf("%s",&compte.Nom);
        fprintf(C,"%s ",compte.Nom);
        fflush(stdin);
         printf("entrez prenom :");
        scanf("%s", &compte.Prenom);
        fprintf(C,"%s ",compte.Prenom);
        fflush(stdin);

        printf("entrez montant :");
        scanf("%f",&compte.Montant);
        fprintf(C,"%f ",compte.Montant);
        fflush(stdin);
        fclose(C);
        printf("compte bien cree");
        }


       void AfficherCompte(){
        FILE *C;
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
printf("donner un num de recherche :");
if (compte.CIN==Numrech){

do {
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


int main(){
char choix ;
char qus;
do{
system("cls");
printf("MENU \n");
printf("1 Ajouter un nouveau compte");
printf("\n 2 Affichage des comptes");
printf("\n 3.Rechercher");
printf("\n 4. Supprimer");
printf("\n 5.Quitter");
do{
printf("\n Entrez votre choix");
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
case 4:
Supprimer(); 
break;
}

printf("\n continuez O/N?");
scanf("%s",&qus);
fflush(stdin);
}while (qus=='o' || qus=='O' );
return 0 ;
}
