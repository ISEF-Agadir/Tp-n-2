#include<stdio.h>
#define limit 2
float matrice[3][5];
void SaisirTab (float **T)
{

    for(int i=0; i<3; i++)
        {
            for(int j=0; j<5; j++)
            {
                printf("Ligne%d,Colone%d",i,j);
                scanf("%f", &matrice[i][j]);

            }
        }
}
void AffichTab (float **T)
{
    for (int i=0; i<3; i++)
    {
        printf("\n");
        for (int j=0; j<5; j++)
        {
          printf("  %f", matrice[i][j]);
        }
    }
}


