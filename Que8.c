//grestest among two number.
/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Enter the numbers:\na:%d\nb:%d",a,b);
    if(a>b)
    {
        printf("a:%d is largest",a);
    }
    else
    {
         printf("\nb is largest");
    }
}*/



//gretest among three number.
#include<stdio.h>
int main()
{
    int a,b,c;
      printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b&&a>c)                  //int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    {
        printf("a is largest");   // printf("%d is the greatest.\n", max);

    }
    else
    {
        if(b>a&&b>c)
         printf("b is largest.");
         else
         {
             printf("c is largest.");
    }
         }
         
   
}
