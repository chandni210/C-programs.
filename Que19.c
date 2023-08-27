//print all the prime factor.
#include<stdio.h>
int main()
{
    int x,i;
    
    printf("Enter the number:");
    scanf("%d",&x);
    for(i=2;x>1;i++)
    {
         while(x%i==0)
    {
        printf("%d\n",i);
        x=x/i;
    }
    

    }
}