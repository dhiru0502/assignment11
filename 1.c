#include<stdio.h>
int lcm(int, int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("LCM is: %d",lcm(a,b));
    return 0;
}
int lcm(int x, int y)
{
    int L;
    for(L=1;L<=x*y;L++)

        if(L%x==0 && L%y==0)

            break;
    return L;
}
