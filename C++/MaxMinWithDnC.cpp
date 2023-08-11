#include<iostream>
using namespace std;

int* min_max(int *array, int start, int end)  {
    int arr[2];
    if(end == start)    {
        arr[0] = array[start];
        arr[1] = array[start];
    }
    else if(end-start == 1)   {
        if(array[start]>array[end])   {
            arr[0] = array[start];
            arr[1] = array[end];
        }
        else    {
            arr[0] = array[end];
            arr[1] = array[start];
        }
    }
    else    {
        // Recursive call to find the maximum and minimum values in the sub-arrays.
        int mid = (end+start)/2;
        int* arr1 = min_max(array, start, mid);
        int* arr2 = min_max(array, mid+1, end);

        if(arr1[0] < arr2[0]) {
            arr[0] = arr1[0];
        }
        else    {
            arr[0] = arr2[0];
        }

        if(arr1[1] > arr2[1]) {
            arr[1] = arr1[1];
        }
        else    {
            arr[1] = arr2[1];
        }

        return arr;
    }
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

    int* maxMin = min_max(array, 0, length-1);

    cout<<"Maximum value: "<<maxMin[0]<<endl<<" Minimum value: "<<maxMin[1];

    return 0;
}