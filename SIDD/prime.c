#include<stdio.h>
void main()
{
int a,b=34;
for(a=2;a<b;a++)
	{
	 if(b%a==0)
	  printf("not a prime");
	  break;
	 else
	  continue;
	}
}
