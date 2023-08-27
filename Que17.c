//cheack wheather the number is prime or not.
#include<stdio.h>
int prime1();
int prime2();




int main()
{
int a,b;
a= prime1();
b= prime2();





}





//cheack prime method 1.
int prime1()
{
    int n, count=0,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    
    }
    if(count==2)
    
        printf("number is prime");
    
    else
    
        printf("number is not prime.");
    
}
//check method 2.
int prime2()
{
    int x,i;
    printf("Enter the number:");
    scanf("%d",&x);
    for( i=2;i<=x-1;i++)
    if(x%i==0)
    break;
    if(i==x)
    {
        printf("prime no:%d",x);
    }
    else
    {
         printf(" not a prime no:%d",x);
    }
}