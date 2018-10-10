#include<stdio.h>
void pattern(int);
int main()
{
 int n,flag;
 printf("Enter the no. of rows:");
 scanf("%d",&n);
 pattern(n);
 return 0;
}
void pattern(int x)
{
 int i,j;
 for(i=1;i<=x;i++)
 {
  for(j=1;j<=i;j++)
  printf(" *");
  printf("\n");
 }
}
