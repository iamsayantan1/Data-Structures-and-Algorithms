#include<iostream>
using namespace std;

int main()  {
    int length, max, second_max;
    cout<<"Enter the length of an array: ";
    cin>>length;
    cout<<"Enter the array of "<<length<<" element(s)"<<endl;
    int arr[length];
    for(int index=0 ; index<length ; index++)    {
        cin>>arr[index];
    }

    max = arr[0];
    second_max = arr[0];    
    for(int index=0 ; index<length ; index++)   {
        if(arr[index] > second_max) {
            if(arr[index] > max)    {
                second_max = max;
                max = arr[index];
            }
            else    {
                second_max = arr[index];
            }
        }
        else if(second_max == max)  {
            if(arr[index] < second_max) {
                second_max = arr[index];
            }
        }
    }

    //printing resultant values 
    cout<<"Max= "<<max<<" and Second Max= "<<second_max<<endl;
    return 0;
}