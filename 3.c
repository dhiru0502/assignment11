#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(prime(x))
        printf("Number is prime");
    else
        printf("Number is not prime");
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
    if(a%i==0)
        break;
    }
    if(a==i)
        return 1;
    else
        return 0;
}
