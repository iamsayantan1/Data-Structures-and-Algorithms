#include<stdio.h>

void Tower_Of_Hanoi(int no_of_Plates, char source, char destination, char aux)    {
    if (no_of_Plates == 1)
    {
        printf("%c -> %c\n",source, destination);
        return;
    }

    Tower_Of_Hanoi(no_of_Plates-1, source, aux, destination);
    printf("%c -> %c\n",source, destination);
    Tower_Of_Hanoi(no_of_Plates-1, aux, destination, source);
}

int main()  {
    printf("Enter no of plates for tower of hanoi problem: ");
    int no_of_Plates;
    scanf("%d",&no_of_Plates);
    if(no_of_Plates < 0)   {
        printf("Invalid input...");
        return 0;
    }
    printf("Transitions... ");
    if(no_of_Plates == 0)   {
        printf("Invalid input...");
        return;
    }
    Tower_Of_Hanoi(no_of_Plates, 'A', 'C', 'B');
    return 0;
}