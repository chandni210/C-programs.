#include<stdio.h>
int pattern1();
int pattern2();
int pattern3();
int pattern4();
int pattern5();
int pattern6();
int pattern7();
int pattern8();
int pattern9();
int pattern10();




int main()
{  

 pattern1();
 pattern2();
 pattern3();
 pattern4();
 pattern5();
 pattern6();
 pattern7();
 pattern8();
 pattern9();
pattern10();
}
























int pattern1()
{
     int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int pattern2()
{
  int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int space=0;space<n-i-1;space++)
        {
            printf(" ");
        }

        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int pattern3()
{
  int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int space=0;space<i;space++)
        {
            printf(" ");
        }

        for(int j=0;j<=n-i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int pattern4()
{
  int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
         for(int j=0;j<=n-i;j++)
        {
            printf("*");
        }
        for(int space=0;space<i;space++)
        {
            printf(" ");
        }

       
        printf("\n");
    }
}
int pattern5()
{
  int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int space=0;space<n-i;space++)
        {
            printf(" ");
        }

         for(int j=0;j<(2*i)+1;j++)
        {
            printf("*");
        }
        for(int space=0;space<n-i;space++)
        {
            printf(" ");
        }

       
        printf("\n");
    }
}
int pattern6()
{
     int n;
    scanf("%d",&n);

    for( int i=1;i<=n;i++)

    {
       for(int j=1;j<=2*n-1;j++) 
       {
         if(j>=6-i && j<=4+i && j%2==i%2)
         {
             printf("*");
            
            
         }
      
         else
         {
             printf(" ");
            
         }
       }
        printf("\n");
    }
    
   
}

int pattern7()
{
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=2*n-1;j++)
        {
           if(j<=6-i||j>=4+i)
           {
            printf("*");
           }
           else{
            printf(" ");
           }
        } 
        printf("\n");
    }
}

int pattern8()
{
  int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int k=1;
        for(int space=0;space<n-i;space++)
        {
            printf(" ");
        }

         for(int j=0;j<(2*i)+1;j++)
        {
            printf("%d",k);
            k++;
        }
        for(int space=0;space<n-i;space++)
        {
            printf(" ");
        }

       
        printf("\n");
    }
}
int pattern9()
{
    int n;
    scanf("%d",&n);

   
    for( int i=1;i<=n;i++)
    {
        for( int j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for( int j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for( int j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    
} 
int pattern10()
{
  int n,k=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        i<=(n-2)?k++:k--;
       for(int j=0;j=2*n-1;j++)
       if(j>=(n-1)-k &&j<= (n-4)+k)
       {
       printf("*");
       }
       else 
       {

       printf(" ");
       }
        
       
       
        printf("\n");
    }
}