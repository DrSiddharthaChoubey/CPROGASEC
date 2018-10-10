#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,i,n,f;
while(1)
{
  printf("\t\tMENU");
  printf("\n 1.Factorial\n");
  printf("\n 2.prime\n");
  printf("\n 3.odd/even\n");
  printf("\n 4.exit\n");
  printf("\n\nEnter your choice");
  scanf("%d",&choice);

 

  switch(choice)
{
  
  case 1:
    f=1;
    printf("Enter no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      f=f*i;
    printf("factorial of %d = %d",n,f);
    break;
  case 2:
    printf("Enter no.");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
     if(n%i==0)
       break;
    }
     if(i==n)
      printf("%d is prime no.",n);
     else
       printf("%d is not prime no.",n);
    break;
  case 3:
     printf("Enter no.");
    scanf("%d",&n);
    
    
     if(n%2==0)
       printf("%d is even no.",n);
   
     else
       printf("%d is odd no.",n);
    break;
  case 4:
    exit(0);
   
  default:
    printf("\nInvalid");
}
}
 
return 0;
}
