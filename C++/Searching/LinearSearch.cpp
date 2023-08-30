#include<iostream>
using namespace std;

int linearSearch(int arr[], int length, int key);

int main()  {
    int length, key;
    cout<<"-------------------Linear Search-------------------"<<endl;

    //Taking size of the array
    cout << "Enter the size of array: "; cin >>length ;

    //Taking input from user for elements in array.
    cout<<"\nEnter "<<length<<" numbers: ";
    int arr[length];
    for(int index=0 ; index<length ; index++)   {
        cin>>arr[index];
    }

    //Taking key as input from user
    cout<<"Enter the element you want to find: "; cin>>key;

    int location = linearSearch(arr, length, key);

    if(location != -1)  {
        cout<<"Element is found in position no "<<location<<endl;
    }
    else    {
        cout<<"Element is not found!!"<<endl;
    }
}

//Starting Linear Search Algorithm
int linearSearch(int arr[], int length, int key)  {
    for (int index = 0; index < length; index++)
    {
        if(arr[index] == key)   return index;
    }

    return -1;
}
