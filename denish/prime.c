#include<stdio.h>
#include<math.h>
void main()
{   
       int a, i,count=0;
		printf("entr a no:");
		scanf("%d",&a);
        
		   
 	 	    for(i=2;i<=sqrt(a);i++)
			{ if(a%i==0)

			count++;
	     }
		if(count==0)
		printf("\n not a prime no");
		else
		printf("\n prime no");
		
} 
