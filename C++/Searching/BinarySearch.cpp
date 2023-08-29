#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key);

int main()  {
    int length, key;
    cout<<"-------------------Binary Search-------------------"<<endl;

    //Taking size of the array
    cout << "Enter the size of array: "; cin >>length ;

    //Taking input from user for elements in array.
    cout<<"\nEnter "<<length<<" numbers in a sorted manner: ";
    int arr[length];
    for(int index=0 ; index<length ; index++)   {
        cin>>arr[index];
    }

    //Taking key as input from user
    cout<<"Enter the element you want to find: "; cin>>key;

    int location = binarySearch(arr, 0, length-1, key);

    if(location != -1)  {
        cout<<"Element is found in position no "<<location<<endl;
    }
    else    {
        cout<<"Element is not found!!"<<endl;
    }
}

//Starting Binary Search Algorithm
int binarySearch(int arr[], int start, int end, int key)  {
    int mid = (start+end)/2;

    if(start>end) return -1;
    else if(key == arr[mid]) return mid;
    else if(key < arr[mid]) return binarySearch(arr, start, mid-1, key);
    else return binarySearch(arr, mid+1, end, key);
}
