#include<stdio.h>

void triangle3(int height);

int main()  {
    printf("Enter the height of to print a reverse inverted triangle: ");
    int height;
    scanf("%d", &height);

    triangle4(height);

    return 0;
}

void triangle4(int height)  {
    for(int index1=0 ; index1<height ; index1++) {
        for(int index2=0 ; index2<index1 ; index2++)
            printf("  ");
        for(int index2=0 ; index2<height-index1 ; index2++)
            printf("* ");
        printf("\n");
    }
}