
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
        printf("A Faire");
        printf("\n+Veuillez entrer votre CIN :");
        scanf("%s",compte.CIN);
        fprintf(C,"%s",compte.CIN );
        fflush(stdin);

        printf("+Veuillez entrer votre nom :");
        scanf("%s",compte.Nom);
        fprintf(C,"%s",compte.Nom);
        fflush(stdin);

         printf("+Veuillez entrer votre prenom :");
        scanf("%s",compte.Prenom);
        fprintf(C,"\n%s",compte.Prenom);
        fflush(stdin);

        printf("+Veuillez entrer votre montant :");
        scanf("%f",&compte.Montant);
        fprintf(C,"\n %f",compte.Montant );
        fflush(stdin);
        fclose(C);
        printf("compte bien cree");
        }


    void AfficherCompte(){
    FILE * C;
    C=fopen("comptes.txt","r");
    do{
    printf("\n=======INFORMATIONS SUR LE COMPTE======= \n");
    fscanf(C," %s ",compte.CIN);
    printf("Nomero de CIN :%s \n",compte.CIN);
    fflush(stdin);
    fscanf(C," %s ",compte.Nom);
    printf("Nom du client :%s\n",compte.Nom);
    fflush(stdin);
    fscanf(C," %s",compte.Prenom);
    printf("Prénom de client :%s\n",compte.Prenom);
    fflush(stdin);
    fscanf(C," %f ",&compte.Montant);
    printf("Montant DE COMPTE:%f Dh\n.",compte.Montant );
    fflush(stdin);}
    while (!feof(C));
    fclose(C);
}

void montant(){
int i;
FILE *C;
C = fopen("comptes.txt","r");
float t[10];
for(i=0;i<t[10];i++){
    printf("%.2f\n", t[i]);
   while (fread(&compte, sizeof(compte),4, C))
 t[i]= compte.Montant;
}
fclose(C);
}

   void RechercherCompte(){
   char CIN_RECH[40];
   FILE * C;
   C = fopen ("comptes.txt", "w+");
   printf("donnez CIN a rechercher :");
   scanf("%s",CIN_RECH);
   fscanf(C, "%s %s %s %f", compte.CIN, compte.Nom, compte.Prenom,&compte.Montant);
   if (strcmp(compte.CIN,CIN_RECH) == 0){
   rewind(C);
   printf("CIN DE CLIENT :%s\n", compte.CIN );
   
   printf("nom de client : %s\n", compte.Nom );
   printf("Prenom : %s\n", compte.Prenom );
   printf("Solde : %f dh\n",compte.Montant );}
    else{
        printf("il n'existe pas");
    }
   fclose(C);
   } 


int main(){
int choix ;
int qus;
do{
system("cls");
printf("\n__________________Menu_____________________ \n");
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
AfficherCompte();
break;

case 3:
RechercherCompte();

break;
case 4:
montant();
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