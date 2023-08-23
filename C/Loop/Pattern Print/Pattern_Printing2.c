#include<stdio.h>

void triangle2(int height);

int main()  {
    printf("Enter the height of to print a reverse triangle: ");
    int height;
    scanf("%d", &height);

    triangle2(height);

    return 0;
}

void triangle2(int height)  {
    for(int index1=0 ; index1<height ; index1++) {
        for(int index2=0 ; index2<height-index1-1 ; index2++)
            printf("  ");
        for(int index2=0 ; index2<index1+1 ; index2++)
            printf("* ");
        printf("\n");
    }
}