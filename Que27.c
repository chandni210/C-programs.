

#include <stdio.h>
int printname( int i,int n);

 int printname(int i,int n)
 {
    
    if(i>n)
    {
        return 0;
    }
    else
    {
       printf("Chandni\n");
       printname(i+1,n);
        
    }

 }



int main()
{
    int n,i;
    scanf("%d",&n);
    printname(1,n);
    
}


 