#include <stdio.h>
#include <stdlib.h>
typedef struct datenaissance {
    int jour;
    int mois;
    int annee;
     }datenaissance;


typedef struct  {

    char nom [100];
    char prenoms[100];
datenaissance date ;

}personne;
int age(personne a){
int age;
age=2022-a.date.annee;
return age;
}

int main(){
    personne P[50];
    int n,i,d,j,E,T[i] ;
    printf("Entrez le nombre des personnes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
    printf("donnez les information d'un personne : \n ",i+1);
    printf("donnez le nom : ");
    scanf("%s",&P[i].nom);
    printf("donnez le prenoms : ");
    scanf("%s",&P[i].prenoms);
    printf("donnez le mois le jour et l'annee de naissance :\n");
    printf("entrez le jour de naissance : \n");
    scanf("%d",&P[i].date.jour);
    printf("entrez le mois de naissance : \n");
    scanf("%d",&P[i].date.mois);
    printf("entrez l'annee de naissance : \n");
    scanf("%d",&P[i].date.annee);
        }
    for(i=0;i<n;i++)
    {
    printf("les information du personne num %d est : \n",i+1);
    printf("%s ,%s ,%d/%d/%d \n",P[i].nom,P[i].prenoms,P[i].date.jour,P[i].date.mois,P[i].date.annee);
    }
    for(i=0;i<n;i++){
            personne c;
        if(age(P[i])>age(P[i+1])){
            c=P[i];
            P[i]=P[i+1];
            P[i+1]=P[i];
        }

    }
    for(i=0;i<n;i++){
        printf(" nom= %s & prenom= %s & date de naissance =%d %d %d",P[i].nom,P[i].prenoms,P[i].date.jour,P[i].date.mois,P[i].date.annee);
    }
    return 0;
}
