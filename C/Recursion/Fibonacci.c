#include<stdio.h>

int fibonacci(int n)    {
    if(n == 0 || n == 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);;
}

int main()  {
    printf("Enter n to get nth term of fibonacci series: ");
    int n;
    scanf("%d",&n);
    if(n < 1)   {
        printf("Invalid input...");
        return 0;
    }
    
    int nth_term = fibonacci(n-1);
    printf("%dth term of fibonacci series is %d.",n, nth_term);
    return 0;
}