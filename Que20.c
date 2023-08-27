//fibonacci serise.

#include<stdio.h>
int main()
{ int n,i;
int a=-1,b=1,c;
 printf( "Enter the no of fibonacci term to be printed:");
 scanf("%d",&n);  
 for(i=0;i<n;i++) 
 {
    c=a+b;  
    printf("%d\n",c);
    a=b;
    b=c;
 }

}