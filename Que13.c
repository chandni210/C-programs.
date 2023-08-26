#include<stdio.h>
 int factorial();
 int table();
 int power();

int main()
{
   int a,b,c;
  a= factorial();
  b=table();
  c=power();
  

  
}
//function to print the factorial of number.
  int factorial()
{
    int n,x;
    int fact=1;
   printf("Enter the number:");
   scanf("%d",&n);
   x=n;
   while(n>=1)
   {
   fact=fact*n;
   n--;
   
   }

     printf(" factorial of%d is:%d",x,fact);
}
// functionto print the table.
int table()
{  
    int n,table;
printf("\nEnter the no whose Table you want to print:");
scanf("%d",&n);
for( int i=1;i<=10;i++)
{
 table=n*i;
 printf("%d\n",table);
}

}
// functionto print the power of any number.
int power()
{  
    int num,pow,ans=1;
printf("Enter the no whose power we want to raise you want and power:");
scanf("%d%d",&num,&pow);
for( int i=1;i<=pow;i++)
{
 ans=ans*num;
 printf("%d\n",ans);
}

}