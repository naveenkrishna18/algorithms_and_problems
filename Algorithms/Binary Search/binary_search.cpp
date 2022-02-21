//Binary Search Algorithm in c++
#include<iostream>
#include<stdlib.h>
using namespace std;

//Binary Search Function
int binary_search(int* array, int key, int low, int high)
{
    int mid;
    mid =(int)((low+high)/2);
    if (low == high)
    {
        if(array[low] == key)
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    else if(array[mid] == key)
    {
        return mid;
    }
    else if(array[mid] > key)
    {
        return binary_search(array, key, low, mid-1);
    }
    else
    {
        return binary_search(array, key, mid+1, high);
    }
}

//Main Function
int main()
{
    int length,element;
    //getting array size from user
    cout<<"Enter the size of array : ";
    cin>>length;
    //empty array creation
    int* array;
    array = (int*)malloc(length*sizeof(int));
    //loop to insert the array items into array
    for(int i=0;i<length;i++)
    {
        cout<<"Enter item no."<<i+1<<" in the array : ";
        cin>>element;
        array[i] = element;
    }
    int key;
    cout<<"Enter the element to search : ";
    cin>>key;
    //calling the function
    int result;
    int low = 0;
    int high = length-1;
    result = binary_search(array, key, low, high);
    //printing the result
    if (result>=0)
    {
        cout<<"The Element is found in position "<<result;
    }
    else
    {
        cout<<"The Element is not in the array";
    }
    return 0;
}