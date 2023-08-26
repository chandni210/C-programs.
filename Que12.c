#include<stdio.h>
int sum_natural_number();
int sum_even_number();
int sum_odd_number();








int main()
{
  int a,b,c;
a=sum_natural_number();
b=sum_even_number();
c=sum_odd_number();

}





//function to print sum of n natural number.

int sum_natural_number()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",sum);
    
    }
}



//function to print sum of n even number.

int sum_even_number()
{
    int n,even;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        even=2*i;
        sum=sum+even;
        printf("%d\n",sum);
      
    }
}


//function to print sm of n odd number.

int sum_odd_number()
{
    int n,odd;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        odd=2*i+1;
        sum=sum+odd;
        printf("%d\n",sum);
    } 
}

