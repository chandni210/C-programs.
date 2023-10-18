#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k;
    printf("Enter the elements in FIRST array A:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        scanf("%d",&A[i][j]);
    }
    printf("Enter the elements in SECOND arrayB :");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        scanf("%d",&B[i][j]);
    }
    for(i=0;i<=2;i++)
    
    {
        for(j=0;j<=2;j++)
        {
       int sum=0;
         for(k=0;k<=0;k++)
            sum=sum+A[i][k]*B[k][j];
           C[i][j]=sum;
        }
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        printf(" %d \n",C[i][j]);
    }
    
    
    
    
}