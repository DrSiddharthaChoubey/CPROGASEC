#include<stdio.h>
#include"add.h"

int main()
{
 int a,b,c;
 printf("Enter the value of a and b::");
 scanf("%d%d",&a,&b);
 c=add(a,b);
 printf("sum=%d",c);
 return 0;
}
