#include<stdio.h>
 int fact( int n);
 int main()
 {
  int n,k;
  printf("Enter the number:");
  scanf("%d",&n);
  k=fact(n);
  printf("the factorial is:%d",k);

 }
 int fact(int n)
 { 
  int s;
  if(n==1||n==0)
  return 1;
  
    s= n*(n-1);
    return s;
  
 }