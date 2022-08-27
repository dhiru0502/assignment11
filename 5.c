#include<stdio.h>
void nprime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    nprime(n);
    return 0;
}
void nprime(int n)
{
    int i,j,count=0 ;
    for(i=2;1;i++)
    {
        for(j=2; j<i ;j++)
        {
            if(i%j==0)
            break;

        }
        if(i==j)
        {
            printf("%d ",i);
            count++;
        }
        if(count==n)
            break;

    }
}
