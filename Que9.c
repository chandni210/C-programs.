#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D,root1,root2;
    printf("Enter the cofficent of quadratic equation:");
    scanf("%f %f %f",&a,&b,&c);

    D=b*b-4*a*c;
    if(D>=0)
    {
        printf("Real Roots.\n");
        root1=(-b+sqrt(D))/(2*a);
        root1=(-b-sqrt(D))/(2*a);
        printf("The roots are \nroot1:%f\nroot2:%f",root1,root2);


    }
    else
    {
         printf(" No Real Roots.");

    }

}