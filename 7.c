#include<stdio.h>
void fibonacci(int);
int main()
{
    int N;
    printf("How many terms of Fibonnaci series to print: ");
    scanf("%d",&N);
    fibonacci(N);
    return 0;
}
void fibonacci(int N)
{
    int a=-1,b=1;
    while(N>0)
    {
      b=a+b;
      printf("%d  ",b);
      a=b-a;
      N--;
    }
}
