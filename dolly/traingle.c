#include<stdio.h>
int main()
{
int s1,s2,s3,sum,large;
printf("enter the value of s1,s2,s3");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1>s2&&s1>s3)
    {
      if(s2+s3>s1)
         printf("traingle is valid");
      else
         printf("traingle is invalid");
    }
if(s2>s1&&s2>s3)
    {
      if(s1+s3>s2)
         printf("traingle is valid");
      else
     printf("traingle is invalid");
    }
if(s3>s1&&s3>s2)
    {
      if(s1+s2>s3)
         printf("traingle is valid");
      else
     printf("traingle is invalid");
    }

