/*Garcia Juarez Rodrigo
algoritmo para resolver el problema 2 de la guia de estudios*/
#include <stdio.h>
#include <stdlib.h>
#define a 100
#define b 8

void read_Drinks(int arr[a][b])
{
    Int i, j, var1, var2;
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            arr[i][j] = 0;
        }
    }
    printf("Se inicializo la matriz de forma correcta.\n");

    for(i = 0; i < a; i++)
    {
        printf("Dame la bebida correspondiente del pueblo %d: ", i);
        scanf("%d", &var1);
        while(var1 != -1)
        {
            printf("Dame la cantidad en litros: ");
            scanf("%d", &var2);
            arr[i][var1] = var2;
            printf("Dame otra bebida: ");
            scanf("%d", &var1);
        }

    }
}

void show_1stDrink(int arr[a][b], int total[])
{
    int i, j, bebida, max = 0; 
    for(j = 0; j < b; j++)
    {
        for(i = 0; i < a; i++);
        {
            total[j] = total[j] + arr[i][j];
        }
    }

    for(i = 0; i < b; i++)
    {
        if(max < total[i])
        {
            max = total[i];
            bebida = i;
        }
    }
    printf("La bebida %d es la bebida que mas se consume con %d litros.\n",
            bebida, max);
}

void show_1stDrinkAA(int arr[a][b], int total2[])
{
    int i, j, acum, bebida2, max2 = 0;
    for(i = 0; i < 8; i++)
    {
        acum = 0;
        if(i != 1 || i != 6)
        {
            for(j = 0; j < 100; j++)
            {
                acum = acum + arr[j][i];
            }
            total2[i] = acum;
        }
    }

    for(i = 0; i < 8; i++)
    {
        if(max2 < total2[i])
        {
            max2 = total2[i];
            bebida2 = i;
        }
    }
    printf("La bebida %d es la mas consumida con %d litros.\n", bebida2, max2);
}

void show_1stTown(int arr[a][b], int total3[])
{
    int i, j, acum2, pueblo, max3 = 0;
    for(i = 0; i < 100; i++)
    {
        total3[i] = 0;
    }

    for(i =0; i < 100; i++)
    {
        acum2 = 0;
        for(j = 0; j < 8; j++)
        {
            if(j != 1 || j !=6)
            {
                acum2 = acum2 + arr[i][j];
            }
            
        }
        total3[i] = acum2;
    }

    for(i = 0; i < 100; i++)
    {
        if(max3 < total3[i])
        {
            max3 = total3[i];
            pueblo = i;
        }
    }
    printf("El pueblo %d comsume mas alcohol con %d litros.", pueblo, max3);
}

int main (int argc, char *argv )
{
    int arr[a][b];
    int total[8] = {0,0,0,0,0,0,0,0};
    int total2[8] = {0,0,0,0,0,0,0,0};
    int total3[100];

    read_Drinks(arr);
    printf("\n\n");
    show_1stDrink(arr, total);
    printf("\n\n");
    show_1stDrinkAA(arr, total2);
    printf("\n\n");
    show_1stTown(arr, total3);
    return 0;
}
