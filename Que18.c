//prime number between two  numbers.
#include<stdio.h>
int main()
{
    int a,b ;
    int i,j; 
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<b;j++)
        
              if(i%j==0)
              break;
              if(j==i)
              printf("%d\n",i);
       

    
   
    

        
    }
   
}