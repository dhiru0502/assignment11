#include<stdio.h>
void betprime(int, int);
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    betprime(a,b);
    return 0;
}
void betprime(int a, int b)
{
    int i;
    for(a+=1;a<b;a++)
    {
        for(i=2; i<a; i++)
        {
            if(a%i==0)
            break;

        }
        if(a==i)
            printf("%d ",a);
    }
}
