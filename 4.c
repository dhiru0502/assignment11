#include<stdio.h>
int nextprime(int );
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Next prime number is: %d", nextprime(a));
}
int nextprime(int a)
{
    int i;
    for(a+=1;1;a++)
    {
        for(i=2; i<a ;i++)
        {
            if(a%i==0)
            break;

        }
        if(i==a)
        {
            break;
        }
    }
    return a;
}
