//lCM of numbers.
#include<stdio.h>
int main()

{
    int a,b,L;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    for(L=1;L<=a*b;L++)
    if(L%a==0&&L%b==0)
    break;
    printf("LCM: %d",L);

}
