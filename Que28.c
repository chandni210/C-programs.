#include<stdio.h>
int sumofdigit( int n);

int main()
{ 
    int n,sum;
    printf("Enter the no :");
    scanf("%d",&n);
    sum=sumofdigit(n);
    printf("sum of digit is:%d",sum);  
}

int sumofdigit( int n)
{
    int c;
    if (n/10==0)
{
    return n*n;
}
else{
  return ((n%10) * (n%10) + sumofdigit(n/10));
  
}
}