#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Gestion_Bancaire{
char CIN[30];
char nom[100];
char prenom[100];
float montant;
};
 struct Gestion_Bancaire compt1;
  struct Gestion_Bancaire compt[100];
   int i ;
   int p=0;

void save()
{
 FILE *cp;
  cp=fopen("Gestion_Bancaire.txt","a");
 fprintf(cp,"\n%s ",compt[i].CIN);
 fflush(cp);
fprintf(cp,"%s ",compt[i].nom);
 fflush(cp);
fprintf(cp,"%s ",compt[i].prenom);
 fflush(cp);
fprintf(cp,"%f \n",compt[i].montant);
 fflush(cp);
 
}

void Ajouter()
{
 
for ( i = 0;i<100;i++){
 printf("\nENTREZ CIN:");
 scanf("%s",compt[i].CIN); 
 printf("\nENTREZ LE NOM:");
 scanf("%s",compt[i].nom);
 printf("\nENTREZ PRENOM:");

 scanf("%s",compt[i].prenom); 
 printf("\nSOLDE :");

 scanf("%f",&compt[i].montant);
 printf("\nBien ajouter:");
save();
p++;
break;
 }
}

 


void Supprimer()
{
 int i,j;
 char cin[20] ;

 
 int k ;
 k=-1;
 for(i=0;i<100;i++)
 { if(strcmp(compt[i].CIN,cin)==0)
   {
     k=1;
    for(j=i;j<100-1;j++)
    { 
      compt[j]=compt[j+1];
    }
    
   }
  
 }
 
 
 
}
void Trier() 
{
  int  c[100];
 int i,j;
 float a = 0;
 for(i=0;i<100;i++)
{
  if(compt[i].montant>compt[i+1].montant)
   {
     a=c[i];
     c[i]=c[j];
     c[j]=a;
   }
printf("%f",c[j]);
  }
 }
 


/*
  void RechercherCompte(){
    int arr[100];
    float CIN_RECH;
    int i;
    printf("Enter CIN: ");
    scanf("%s",CIN_RECH);

    for(i=0; i<100; i++){
    if(strcmp(compte.CIN[i],CIN_RECH)==0){
        printf("%s",compte.CIN[i]);
        printf("%s",compte.nom[i]);
        printf("%s",compte.prenom[i]);
        printf("%f",compte.montant[i]);

    }
    
    }
 
 fclose(cp);
}
*/

void afficher(){
  FILE *cp;
  cp = fopen("Gestion_Bancaire.txt","r");
  char bef[100][100];
  i = 0;
 while(fgets(bef[i], 100, cp)){
   printf("%s", bef[i]);
   i++;
 }
fclose(cp);

}


void RechercherCompte()
{

    int i;
    char B[100];

    FILE *cp;
  cp=fopen("Gestion_Bancaire.txt","a"); 
for (i = 0; i<100;i++){


if (cp==NULL)
        printf("le fichier n'existe pas \n");
    else
    { 
    
        printf("Entrez le CIN: \n");
        scanf("%s",B);
    }
        
        
        for(i=0;i<100;i++)
        { 
            
            fscanf(cp,"%s\t%s\t%s\t%f",&compt[i].CIN,&compt[i].nom,&compt[i].nom,&compt[i].montant);
            if(strcmp(compt[i].CIN,B)==0)
            {     
            
        printf("%s \t %s \t %s \t %f",compt[i].CIN,compt[i].nom,compt[i].prenom,compt[i].montant);
        fclose(cp);
         
             }
        }
        printf ("déjà exist ");
        fclose(cp);
}
        }   
            
 


main()
{
int ops ;
char qus;

do{
system("cls");

printf("\n #####MENU##### \n");
printf("\n 1.pour ajouter");
printf("\n 2.pour afficher");
printf("\n 3.pour Operation");
printf("\n 4.pour supprime");
printf("\n 5.SUPRIMER TOUT FICHES");
printf("\n 6.QUITTER");
do{
printf("\n entre votre choix :")
;
scanf("%d",&ops);

switch(ops){
case 1:
Ajouter();
break;
case 2:
afficher();

break;
case 3:
RechercherCompte();
break;
case 4:
Supprimer();
break;

case 5:


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

    