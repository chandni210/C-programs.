//check co-prime number.
#include<stdio.h>
int main()
{
    int a,b,min,i;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for( i=2;i<min;i++)
    if(a%i==0&&b%i==0)
    break;
   if(i==min+1) 
    printf("%dand%d are co-prime numbers.",a,b);
else 
    printf("%dand%d are not co-prime numbers.",a,b);


}