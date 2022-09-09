#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float A,B,R;
    int operation,X;
    double angle;
    do{
        printf("Calulatrice scientifique : OPERATIONS :\n");
        printf("1 - Addition.\n");
        printf("2 - Soustraction.\n");
        printf("3 - Multiplication.\n");
        printf("4 - Division.\n");
        printf("5 - Reste de la division.\n");
        printf("6 - Puissance.\n");
        printf("7 -Racine carre.\n");
        printf("8 -tan sin cos.\n");
        printf("Choisir votre calclule 1 a 8:");
        scanf("%d",&operation);
        switch(operation){
            case 1 :printf("Veuillez entre la valeur A et B : ");
                 scanf("%f%f",&A,&B);
                 printf("Le resultat est %.2f\n",A+B);
                    break;

            case 2 :printf("Veuillez entre la valeur A et B : ");
                   scanf("%f%f",&A,&B);
                 printf("Le resultat est %.2f\n",A-B);
                     break;

            case 3 :printf("Veuillez entre la valeur A et B : ");
            scanf("%f%f",&A,&B);
                 printf("Le resultat est %.2f\n",A*B);
                    break;
            case 4 : printf("Veuillez entrer la valeur de A et B : ");
                    scanf("%f%f",&A,&B);
                if(B!=0)
                printf("Le resultat est %.2f\n",A/B);
                    else
                        printf("La division sur 0 est impossible\n");
                        break;
            case 5 : printf("Veuillez entre la valeur A et B : ");
            scanf("%f%f",&A,&B);
                printf("Le resultat est %.2f\n",(int)A%(int)B);
                 break;
            case 6 : printf("Veuillez entre la valeur A et B : ");
            scanf("%f%f",&A,&B);
                printf("Le resultat est %.2f\n",pow(A,B));
                break;
            case 7 : printf("veuillez entrer x :");
                scanf(" %f",&X);
                R = sqrt(X);
             printf("Racine carree de %d = %d \n",(int)X , (int)R);
                    break;
             case 8 : printf("veuillez saisir un angle en radian : ");
                    scanf("%f",&angle);
                printf("le cosinus de l'angle vaut est : %f\n",cos (angle));
                printf("le sinus de l'angle vaut est : %f\n",sin (angle));
                printf("le tangente de l'angle vaut est : %f\n",tan (angle));


            default : printf ("Cette operation incorrect \n");
                    break;

                    }

    }while(1);
    return 0;
}
