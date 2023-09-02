#include<stdio.h>

void armstrong(int number);
int power(int base, int exponent);

int main()  {
    printf("Enter a number to check is it armstrong number or not: ");
    int number;
    scanf("%d", &number);
    armstrong(number);
    return 0;
}

void armstrong(int number)  {
    int sum = 0;
    int base = 0;
    int temp = number;
    while(temp != 0)  {
        base = temp%10;
        sum += power(base,3);
        temp /= 10;
    }

    if(sum == number)   {
        printf("\nThe given %d is an Armstrong Number.", number );
    }
    else    {
        printf("\nThe given %d isn't an Armstrong Number.\n", number );
    }
}

int power(int base, int exponent)  {
    int pow=1;
    for(int index=0 ; index<exponent ; index++) {
        pow *= base;
    }
    return pow;
}