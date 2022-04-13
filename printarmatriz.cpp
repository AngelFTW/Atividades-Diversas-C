#include<stdio.h>
int main()
{
    int mat[3][4], i, j, max;
    printf("Digite os valores da matriz: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            mat[i][j]=(mat[i][j])*5;
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
        printf("%d     ", mat[i][j]);
        }
        printf("\n");
    }

}
