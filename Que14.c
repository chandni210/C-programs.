#include<stdio.h>
int find_no_of_digit();
int reverse_num();
int sum_num();

int main()
{
    int a,b,c;
 a=find_no_of_digit();
 b= reverse_num();
 c=sum_num();


}





//find the number of digit in given number.
  int find_no_of_digit()
{ 
    int num,count=0;
   printf("Enter the number:");
   scanf("%d",&num);
   
   while(num!=0)
   {
    num=num/10;
    count++;
   }

   printf(" no of digit:%d",count);
}

//sum the  digit.
int sum_num()
{
 int num,rem,sum=0;
   printf("\nEnter the number:");
   scanf("%d",&num);
   
   while(num!=0)
   {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    
    
   }
   printf("%d",sum);
}

//reverse the number.
int reverse_num()
{
 int num,rem;
   printf("\nEnter the number:");
   scanf("%d",&num);
   
   while(num!=0)
   {
    rem=num%10;
    num=num/10;
     printf("%d",rem);
    
   }
}