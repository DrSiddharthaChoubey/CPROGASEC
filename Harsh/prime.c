#include<stdio.h>
int main()
{
int a,b,sum;
for(a=2;a<=1000;a++)
    {
     sum=0;
     for(b=2;b<a;b++)
          {
           if((a%b)==0)
           {
               sum++;
               break;
            }
           }
     if(sum==0)
         printf("\n %d",a);

    }
}
