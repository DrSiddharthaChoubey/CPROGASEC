#include<stdio.h>
int main()
{
int a=4, b=5,c;
c=(++a)&&(++b);
printf("%d %d %d",a,b,c);
return 0;
}
