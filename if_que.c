#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0 && a%5==0)
    {
        printf("Done");
    }
    else
    {
        printf("Wrogn");
    }
    return 0;
}
