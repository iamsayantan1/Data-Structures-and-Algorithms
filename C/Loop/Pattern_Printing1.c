#include<stdio.h>

void triangle1(int height);
void triangle2(int height);
void triangle3(int height);
void triangle4(int height);

int main()  {
    printf("We are going to print 4 types of triangle pattern in this code...\n");
    printf("Enter the height of the triangle: ");
    int height;
    scanf("%d", &height);

    triangle1(height);
    printf("\n");
    triangle2(height);
    printf("\n");
    triangle3(height);
    printf("\n");
    triangle4(height);

    return 0;
}

void triangle1(int height)  {
    for(int index1=0 ; index1<height ; index1++) {
        for(int index2=0 ; index2<index1+1 ; index2++)
            printf("* ");
        printf("\n");
    }
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

void triangle3(int height)  {
    for(int index1=0 ; index1<height ; index1++) {
        for(int index2=0 ; index2<height-index1 ; index2++)
            printf("* ");
        printf("\n");
    }
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