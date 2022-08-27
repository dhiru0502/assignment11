#include<stdio.h>
void square(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    square(x);
    return 0;
}
void square(int a)
{
    int s;
    s=a*a;
    printf("Square is:  %d",s);
}
