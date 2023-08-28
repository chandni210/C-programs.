//convert binary to decimal.
#include<math.h>
#include<stdio.h>

int main()
{
    int n,i=0,s=0;
    printf("Enter the binary number:");
    scanf("%d",&n);
    while(n)
    {
        s=s+pow(2,i)*(n%10);
        n=n/10;
        i++;
    }
    printf("THe decimal no is:%d",s);
}