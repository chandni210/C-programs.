#include<stdio.h>
void printnaturalno( int n);
int main()
{
  int n;
printf("Enter the no of terms:");
scanf("%d",&n);
printnaturalno(n);
}
void printnaturalno(int n)
{ 
    if(n>0)
    { printnaturalno(n-1);
        printf("%d\n",n);
    }
 
 
}