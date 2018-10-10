#include<stdio.h>
void prime1(int,int); 
void main()
{        int n,m;
    printf("Enter a range to find prime nmbers btwn them=");
    scanf("%d%d",&n,&m);
prime1(n,m);
}
void prime1(int n,int m)
{   int a,i,count;
    for(a=n;a<m;a++)
    {count=0;
      for(i=2 ;i<=a/2;i++)
      {
      if(a%i==0)
        {count++;
         break; 
        } 
      }
    if(count==0)
     {
       printf("\n%d is a prime number",a);
     }
   }                  
}
