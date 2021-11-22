
 #include<stdio.h>
  #include<string.h>

       struct CompteBancaire{
           char CIN[50];
           char Nom[100];
           char Prenom[100];
           float Montant;
           };

struct CompteBancaire compte1;

  void CreerCompte()
  {
      FILE * C;
      C = fopen("C:\Users\error51\BRIEFSASS\comptes.txt","a");
      printf("veuillez entrer votre CIN :");
      scanf("%s",compte1.CIN);
      fprintf(C,"%s",compte1.CIN);
      fflush(stdin);
      
      printf("veuillez entrer votre Nom :");
      scanf("%s",compte1.Nom);
      fprintf(C,"%s",compte1.Nom);
      fflush(stdin);
      
      printf("veuillez entrer votre Prenom :");
      scanf("%s",compte1.Prenom);
      fprintf(C,"%s",compte1.Prenom);
      fflush(stdin);
      
      printf("veuillez entrer votre Montant :");
      scanf("%f",&compte1.Montant);
      fprintf(C,"%f",compte1.Montant);
      fflush(stdin);
  
      fclose(C);
      printf ("compte bien créé");
  }

int main()
   {
       CreerCompte();
      return 0;
   }
 