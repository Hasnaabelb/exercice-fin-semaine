
#include <stdio.h>
#include <stdlib.h>

int main()
{
     float A,B;
   float Somme,Produit,Difference,Division,Puissance;
   printf("veuillez entrez la valeur de A : ");
   scanf("%f",&A);
   printf("veuillez entrez la valeur de B : ");
   scanf("%f",&B);
   Somme=A+B;
   Produit=A*B;
   Difference=A-B;
   Division=A/B;
   Puissance=(A,B);
  printf("la Somme de ces deux valeurs reels est : %.2f\n",Somme);
  printf("le Produit de ces deux nombres reels A et B est :%.2f\n ",Produit);
  printf("la Difference de ces deux nombres reels A et B est :%.2f\n ",Difference);
  printf("la Division de ces deux nombres reels A et B est :%.2f\n ",Division);
  printf("la Puissance de ces deux nombres reels A et B est :%.2f\n ",Puissance);


    return 0;

}
