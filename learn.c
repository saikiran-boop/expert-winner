#include<stdio.h>

int main()
{
int b=0, num;
printf("enter number upto which sum has to be calculated: ");
scanf("%d",&num);
if (num>0)
{
  for(int a=1; a<=num; a=a+1)
  {                              
   b+=a;                                 
  }
 printf("the sum is %d", b);
}
else
{
  printf("please enter a natural number");
}
return 0;
}