#include<stdio.h>
int natural_number();
int natural_number_reverse();
int even_number();
int even_number_reverse();
int odd_number();
int odd_number_reverse();







int main()
{
  int a,b,c,d,e,f;
a=natural_number();
b=natural_number_reverse();
c=even_number();
d= even_number_reverse();
e=odd_number();
f=odd_number_reverse();

}





//function to print n natural number.

int natural_number()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}


//function to print reverse of  natural number.

int natural_number_reverse()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
}

//function to prin tn even number.

int even_number()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",2*i);
    }
}

//function to print n even number in reverse order.

int even_number_reverse()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=n;i--)
    {
        printf("%d\n",2*i);
    }
}
//function to prin tn odd number.

int odd_number()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",2*i+1);
    }
}

//function to print n odd number in reverse order.

int odd_number_reverse()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=n;i--)
    {
        printf("%d\n",2*i+1);
    }
}