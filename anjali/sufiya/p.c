#include<stdio.h>
int main()
{
float x,sum=0;
int i,j,f,p,k,terms;
printf("Enter terms:");
scanf("%d",&terms);
printf("Enter value of x:");
scanf("%f",&x);
for(i=1;i<=terms;i++)
{
  f=1,p=1;
  for(j=1;j<=i;j++)
  f=f*j;
  for(k=1;k<=i;k++)
  p=p*x;
  sum=sum+p/(float)f;
}
printf("sum of series=%f",sum);
return 0;
}
