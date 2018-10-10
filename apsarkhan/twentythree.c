#include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter the length and breadth");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("\narea of recatngle:%d",a);
printf("\nperimeter of recatngle:%d",p);
if(a>p)
printf("\narea is greater than perimeter");
else
printf("\narea is not greater than perimeter");
return 0;
}



