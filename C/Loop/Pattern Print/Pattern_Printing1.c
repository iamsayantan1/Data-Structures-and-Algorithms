#include<stdio.h>

void triangle1(int height);

int main()  {
    printf("Enter the height of to print a triangle: ");
    int height;
    scanf("%d", &height);

    triangle1(height);

    return 0;
}

void triangle1(int height)  {
    for(int index1=0 ; index1<height ; index1++) {
        for(int index2=0 ; index2<index1+1 ; index2++)
            printf("* ");
        printf("\n");
    }
}