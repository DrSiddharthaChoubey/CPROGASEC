#include<stdio.h>
void display(char a,int x);
void main()
 {
   int n;char ch;
    printf("Enter one character: ");
   scanf("%c",&ch);
   printf("Enter one integer: ");
   scanf("%d",&n);
   display(ch,n);
 }
  void display(char x,int n)
 {
   int i;
   for(i=1;i<=n;i++)
    {
     printf("%c",x);
    }
  }
   
