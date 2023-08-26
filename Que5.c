//first method :to swap the number with using third variable.

#include<stdio.h>
int main()
{
    int a,b,c;
     scanf("%d %d",&a,&b);
    printf("a:%d\nb:%d\n",a,b);
    
    c=a;
    a=b;
    b=c;
    printf("a:%d\nb:%d\n",a,b);
}

//second method :to swap the number without using third variable.
#include<stdio.h>
int main()
{
    int a,b;
     scanf("%d %d",&a,&b);
    printf("a:%d\nb:%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    
    printf("a:%d\nb:%d\n",a,b);
}