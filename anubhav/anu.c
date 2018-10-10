#include<stdio.h>
int fact(int n)
{ 
  if(n==0)
  return 1;
  else 
 return(fact(n-1)*n);
  }
int main()
{ int num,f ;
printf("Enter a num:");
 scanf("%d",&num);
f=fact(num);
printf("Factorial of %d=%d",num,f);
 return 0 ;}
