#include<stdio.h>
int main()
{
int a,i;
printf("enter a no.");
scanf("%d",&a);
for (i=2;i<a;i++)
{ 
if (a%i==0)
{ 
printf("no is not prime");
break;
}

printf("the no =%d is  prime",a);
}
return 0;
}

