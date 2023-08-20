#include<stdio.h>

int main()  {
    printf("Enter n to get n length fibonacci series: ");
    int length, last=1, s_last=0, temp=0;
    scanf("%d", &length);
    for(int count=0 ; count<length ; count++)   {
        if(count == 0 || count == 1)
            printf("%d ", count);
        else    {
            temp = last;
            last += s_last;
            s_last = temp;
            printf("%d ", last);
        }
    }

    return 0;
}