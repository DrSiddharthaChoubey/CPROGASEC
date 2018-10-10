
#include<stdio.h>
main()
{int i=1,s,j,k=1;
while(i<=5)
    {s=5;
     while(s>=i)
       {printf(" ");
       s--;
       }
    j=1;
    while(j<=i)
      { printf("%d ",k++);
       j++;
       }
    printf("\n");
    i++;
    }
}
