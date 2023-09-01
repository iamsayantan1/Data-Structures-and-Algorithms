#include<stdio.h>

void swap(int* first, int* second);

int main()  {
    printf("Enter two numbers to swap: ");
    int first, second;
    scanf("%d%d", &first, &second);
    printf("\nBefore swapping:");
    printf("First number is: %d and second number is %d.", first, second);
    swap(&first, &second);
    printf("\nAfter swapping:");
    printf("First number is: %d and second number is %d.", first, second);
    return 0;
}

void swap(int* first, int* second)  {
    
    int c;
    c = *first;
    *first = *second;
    *second = c;
}