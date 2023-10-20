#include<stdio.h>

struct student 
{
   int age;
   int roll_no;
   char name[20];
};
struct student studentDetails();
int main()
{
   struct student s1;
   s1=studentDetails();
   printf("%d %d %s",s1.age,s1.roll_no,s1.name);
  
   

}
struct student studentDetails()
{
    struct student S1;
    printf("ENTER THE DETAILS:");
    scanf("%d %d %s",&S1.age,&S1.roll_no,&S1.name);
    
}
