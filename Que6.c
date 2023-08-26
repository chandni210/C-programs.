
//first method:to cheack even or odd by using modulas operator.

/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
   if (a%2==0)
   {
     printf("Even");
   }
   else
   {
    printf("Odd");
   }
   
}*/
// second method:to cheack even or odd by using bitwise operator.
/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
   if (a&1==1)                          // a&1==1?printf("ODD"):printf("EVEN");
        a&1==1?ODD:EVEN.
   {
     printf("Odd");
   }
   else
   {
    printf("Even");
   }*/
   

// third method:to cheack even or odd by dividing and multiplying the number with 2.
/*#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a/2*2;
    c==a?printf("EVEN"):printf("ODD");
   
   
} */

// fourth method:to check even or odd by using by switching temorry variable.
#include<stdio.h>
int main()
{
     int num;
    printf("Enter a number: ");
    scanf("%d", &num);

     int temp = 0; // Temporary variable to switch between even and odd

      for (int i = 1; i <= num; i++)
    {
        temp = !temp; // Toggle the temporary variable between 0 and 1
    }
    if (temp)
    {
        printf("ODD\n");
    }
    else
    {
        printf("EVEN\n");
    }
    return 0;

}

