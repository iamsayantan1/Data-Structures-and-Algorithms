#include<iostream>
using namespace std;

void min_max(int *array, int length)  {
    int maximum = array[0];
    int minimum = array[0];
    
    for(int index=1 ; index<length ; index++)   {
        if(array[index] > maximum)  {
            maximum = array[index];
        }
        else if(array[index] < minimum)   {
            minimum = array[index];
        }
    }

    cout<<"Maximum value: "<<maximum<<endl<<" Minimum value: "<<minimum;
}

int main()  {
    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    cout<<"Enter the array: ";
    int array[length];

    for(int index=0 ; index<length ; index++)    {
        cin>>array[index];
    }

    min_max(array, length);

    return 0;
}