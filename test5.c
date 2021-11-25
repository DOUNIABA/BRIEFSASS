#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  Comptebancaire{
char CIN[30];
char nom[100];
char prenom[100];
float montant;
};
 struct  Comptebancaire compt1;
  struct  Comptebancaire compt[100];
   int i ;
   int p=0;

void save()
{
 FILE *cp;
  cp=fopen(" comptes.txt","a");
fprintf(cp,"\n==================\n");

 fprintf(cp,"CIN               :%s",compt[i].CIN);
 fflush(cp);
fprintf(cp,"\nLE NOM EST       :%s",compt[i].nom);
 fflush(cp);
fprintf(cp,"\nPRENOM DE CLIENT :%s",compt[i].prenom);
 fflush(cp);
fprintf(cp,"\nSOLDE DE CLIENT  :%f",compt[i].montant);
 fflush(cp);
 
}

void Ajouter()
{
 
 printf("\nENTREZ CIN:");
 scanf("%s",compt[p].CIN); 
 printf("\nENTREZ LE NOM:");
 scanf("%s",compt[p].nom);
 printf("\nENTREZ PRENOM:");

 scanf("%s",compt[p].prenom); 
 printf("\nSOLDE :");

 scanf("%f",&compt[p].montant);
 printf("\nBien ajouter:");
save();
p++;
}

  void RechercherCompte(){
    
    char cin[20];
    int i;
    printf("Enter CIN: ");
    scanf("%s",cin);

    for(i=0; i<p; i++){
    if(strcmp(compt[i].CIN,cin)==0){
        printf("   CIN              :%s",compt[i].CIN);
        printf("\n NOM DE CLIENT    :%s",compt[i].nom);
        printf("\n PRENOM DE CLIENT :%s",compt[i].prenom);
        printf("\n SOLDE            :%f",compt[i].montant);

    }
    
    }
}
float montant(){
   char cin[20];
  
    printf("Enter CIN: ");
    scanf("%s",cin);

    for(i=0; i<p; i++){
    if(strcmp(compt[i].CIN,cin)==1){
       
return  compt[i].montant;
    }
    return 0;
    }
}


  void RETRAIT_DEPOT(){
      char choix;
  char cin[20];
  float montant;

     printf("Enter CIN: ");
    scanf("%s",cin);
for(i=0; i<p; i++){
    if(strcmp(compt[i].CIN,cin)==0){
printf("entrez solde:");
scanf("%f",&montant);
printf("pour clacluer le retrait clique qur R et D pour Depot ");
scanf( "%s" ,&choix);
if(choix=='R'|| choix=='r' ){
printf(" le retrait est:%f Dh\n.",compt[i].montant - montant );
}
 if (choix=='D'|| choix=='d'){
  printf(" Depot est:%f Dh\n.",compt[i].montant + montant );

}else {
 printf("choix incorrect" );
 break;
 
}

    }

}
  }

void afficher(){
  FILE *cp;
  cp = fopen("comptes.txt","r");
  char bef[100][100];
  i = 0;
 while(fgets(bef[i], 100, cp)){
   printf("%s", bef[i]);
   i++;
 }
fclose(cp);

}
int main(){
int ops ;
char qus;

do{
system("cls");

printf("\n _________________MENU______________________\n");
printf("\n 1. ajouter un compte");
printf("\n 2. Rechercher compte");
printf("\n 3. afficher");
printf("\n 4.Retrait/Depot");
printf("\n 5.QUITTER");
do{
printf("\n entre votre choix :")
;
scanf("%d",&ops);
fflush(stdin);

switch(ops){
case 1:
Ajouter();
break;
case 2:
RechercherCompte();

break;
case 3:
afficher();
break;
case 4:

break;
case 5:
RechercherCompte();

break;
case 6:
break;

 

}
}while(ops<1 || ops>6);

printf("\n continuez O/N?");
scanf("%s",&qus);
fflush(stdin);
}while (qus=='o' || qus=='O' );
 
}