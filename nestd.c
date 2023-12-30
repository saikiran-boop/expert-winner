#include<stdio.h>

int main()
{
    int n;
    printf("please enter the number: ");
    scanf("%d", &n);
    
    
    for (int i = 1; i <= n; i=i+1)
    {
        for ( int a = 1; a <= i; a=a+1)
        {
            printf("%d", i);
        }
        
        printf("\n");

    }
    return 0;
}