#include<stdio.h>
int fact(int);
int main()
{
    sum();
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
void sum()
{
    int s;
    s= fact(1)/1 +fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
    printf("sum of series is: %d",s);
}
