#include<stdio.h>

void main()
{
 int a,b;
 
 for(b=2; b<100; b++)
  {
    for(a=2; a<b; ++a)
    {
       if(b%a==0)
       {
       
      
       break;
       }
       
    }
   printf("%d\n",b);
  }

}
