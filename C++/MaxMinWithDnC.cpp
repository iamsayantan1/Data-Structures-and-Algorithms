#include<iostream>
using namespace std;

class MinMax    {
public:
    int min;
    int max;
};

MinMax min_max(int *array, int start, int end)  {
    MinMax result;
    if(end == start)    {
        result.min = array[start];
        result.max = array[start];
    }
    else if(end-start == 1)   {
        if(array[start] < array[end])   {
            result.min = array[start];
            result.max = array[end];
        }
        else    {
            result.min = array[end];
            result.max = array[start];
        }
    }
    else    {
        // Recursive call to find the maximum and minimum values in the sub-arrays.
        int mid = (end+start)/2;
        MinMax arr1 = min_max(array, start, mid);
        MinMax arr2 = min_max(array, mid+1, end);

        result.min = (arr1.min < arr2.min) ? arr1.min : arr2.min;
        result.max = (arr1.max > arr2.max) ? arr1.max : arr2.max;
    }
    return result;
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

    MinMax maxMin = min_max(array, 0, length-1);

    cout<<"Maximum value: "<<maxMin.min<<endl<<"Minimum value: "<<maxMin.max;

    getchar();

    return 0;
}