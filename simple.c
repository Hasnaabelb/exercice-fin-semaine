#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B;
    int operation;
    do{
        printf("Calulatrice scientifique : OPERATIONS :\n");
        printf("1 - Addition.\n");
        printf("2 - Soustraction.\n");
        printf("3 - Multiplication.\n");
        printf("4 - Division.\n");
        printf("5 - Reste de la division.\n");
        printf("6 - Puissance.\n");
        printf("Choisir votre calclule 1 a 6:");
        scanf("%d",&operation);

        printf("Saisir le premier nombre : ");
        scanf("%f",&A);
        printf("Saisir le deuxieme nombre : ");
        scanf("%f",&B);
        switch(operation){
            case 1 : printf("Le resultat est %.2f\n",A+B);
                    break;
            case 2 : printf("Le resultat est %.2f\n",A-B);
                    break;
            case 3 : printf("Le resultat est %.2f\n",A*B);
                    break;
            case 4 : if(B!=0)
                printf("Le resultat est %.2f\n",A/B);
                    else
                        printf("La division sur 0 est impossible\n");
                        break;

            case 5 : printf("Le resultat est %.2f\n",(int)A%(int)B);
                    break;
            case 6 : printf("Le resultat est %.2f\n",pow(A,B));
                    break;
            default : printf ("Cette operation incorrect \n");
                    break;
                    }

    }while(1);
    return 0;
}
