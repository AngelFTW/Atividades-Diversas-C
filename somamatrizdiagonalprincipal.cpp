#include<stdio.h>
int main()
{
    int mat[3][3], i, j, sum;
    printf("Digite os valores da matriz: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat[i][j]);
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            if (i==j){
            	sum += mat[i][j];
			}
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        printf("%d     ", mat[i][j]);
        }
        printf("\n");
    }
	printf("\n Soma da diagonal =  %d", sum );
}
