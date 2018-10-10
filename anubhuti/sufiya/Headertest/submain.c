
#include<stdio.h>
#include"sub.h"

int main()
{
 int a,b,c;
 printf("Enter the value of a and b::");
 scanf("%d%d",&a,&b);
 c=sub(a,b);
 printf("Difference=%d",c);
 return 0;
}
