//find co-prime upto
#include<stdio.h>
int main()
{
 int n,i;
 int min,a,b;
 printf("Enter the number:");
 scanf("%d",&n); 

    while(n)
    {
    
        for(b=2;b<=i;b++)
        {
          min=a<b?a:b;

           for( i=2;i<min;i++)
          {
           if(a%i==0&&b%i==0)
          break;

  
          if(i==min+1) 
          {
           printf("\n(%d %d) ",a,b);
           n--;
          }
   }
          }
             a++;

        }

}

