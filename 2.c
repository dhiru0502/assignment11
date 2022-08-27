#include<stdio.h>
int hcf(int, int);
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("HCF is %d",hcf(a,b));
    return 0;
}
int hcf(int x, int y)
{
    int i,h;
    int min=x<y?x:y;
    for(i=1;i<=min;i++)
    {
     if(x%i==0 && y%i==0)
        h=i;
    }
    return h;
}
