#include<stdio.h>
float factorial(int);
int power(int,int);
int main()
{
  int terms,i;
  float sum=0.0;
  printf("Enter the term value:");
  scanf("%d",&terms);
  i=1;
  while(i<=terms)
  {
   sum=sum+power(i,2)/factorial(i);
 
   i++;
}
   printf("sum of series  = %f",sum);
   return 0;
}
 int power(int a,int b)
 {
  int i,p=1;
  for(i=1;i<=b;i++)
  p=p*a;
  return(p);
}
 float factorial(int n)
 {
  int i;
  float f=1.0;
  for(i=1;i<=n;i++)
  f=f*i;
  return(f);
}
