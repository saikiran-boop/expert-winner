#include<stdio.h>

int main()
{
int p1,p2,p3;
printf("please enter the height of three people\n");
printf("height of p1\n");
scanf("%d",&p1);
printf("height of p2\n");
scanf("%d",&p2);
printf("height of p3\n");
scanf("%d",&p3);


if(p1>p2)
{
    if (p1>p3)
    {
        printf("p1 is tallest");
    }

    else
    {
     printf("p3 is tallest");
    }

}

else
{
    if(p2>p3)
    {
        printf("p2 is tallest");
    }
    else
    {
        printf("p3 is tallest");
    }
}
return 0;

}