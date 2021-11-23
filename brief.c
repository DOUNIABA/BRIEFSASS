
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
        
        printf("entrez votre CIN :\n");
        scanf("%s \t", &compte.CIN);
        fprintf(C," %s \t",compte.CIN);
        fflush(stdin);
       
        printf("entrez votre nom :\n");
        scanf("%s \t",&compte.Nom);
        fprintf(C," \n %s \t ",compte.Nom);
        fflush(stdin);
         printf("entrez prenom : \t");
        scanf("%s \t", &compte.Prenom);
        fprintf(C,"\n %s \t",compte.Prenom);
        fflush(stdin);

        printf("entrez montant :\n");
        scanf("%f \t",&compte.Montant);
        fprintf(C,"\n %f \t",compte.Montant);
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
printf("Montant DE COMPTE:%f Dh\n.",compte.Montant );
fflush(stdin);}
while (!feof(C));
fclose(C);
}
void RechercherCompte(){
  char CIN_RECH[40];
   FILE * C;
   C = fopen ("comptes.txt", "w+");
    printf("donnez CIN a rechercher :");
  scanf("%s",CIN_RECH);
  fscanf(C, "%s %s %s %f", compte.CIN, compte.Nom, compte.Prenom,compte.Montant);
   if (strcmp(compte.CIN,CIN_RECH) == 0){
   rewind(C);
   printf("CIN DE CLIENT :%s\n", compte.CIN );
   printf("nom de client : %s\n", compte.Nom );
   printf("Prenom : %s\n", compte.Prenom );
   printf("Solde : %f dh\n",compte.Montant );

   fclose(C);
   }
}
int main(){
int choix ;
char qus;
do{
system("cls");
printf("MENU \n");
printf("1.pour ajouter");
printf("\n 2.pour afficher");
printf("\n 3.pour cherch");
printf("\n 4.pour supprime");
printf("\n 5.Quitter");
do{
printf("\n entrez votre choix: \t");
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
RechercherCompte();
break;
}
printf("00 : menu \n");
printf("0 : sortir");
scanf("%s",&qus);
fflush(stdin);
}
while (qus=='0');
return 0 ;
}