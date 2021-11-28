#include<stdio.h>
int fib(int);
int main()
{
    int n;
printf("enter n");
scanf("%d",&n);
int t=fib(n);
printf("%d term of fibonaci series is %d",n,t);
}
int fib(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2);
    
}