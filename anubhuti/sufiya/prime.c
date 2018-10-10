#include<stdio.h>

void main()
{int l,u;
printf("Enter lower limit: ");
scanf("%d",&l);
printf("Enter upper limit: ");
scanf("%d",&u);
int i,j,count;

for(i=l;i<=u;i++)
 {count=0;
  for(j=2;j<u;j++)
    { if(i%j==0)
      { count++;
        break;
      }
     }
  if(count==0)
 printf("%d \n",i);
}}

