#include<stdio.h>
int main()
{
int x1,x2,x3,y1,y2,y3,p,s,f;
printf("enter the value");
scanf("%d %d %d %d %d %d",x1,x2,x3,y1,y2,y3);
p=abs(y2-y1)/abs(x2-x1);
s=abs(y3-y2)/abs(x3-x2);
f=abs(y3-y1)/abs(x3-x1);
if(p==s&&s==f&&f==p){
printf("POINTS ARE IN LINE");
}
else
printf("POINTS ARE NOT IN LINE");

return 0;
}
