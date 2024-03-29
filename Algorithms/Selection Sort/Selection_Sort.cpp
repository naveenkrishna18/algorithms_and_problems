#include<iostream>
#include<stdlib.h>
using namespace std;

//function to print the values in the array
void display_array(int* array, int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        cout<<array[i]<<" ";
    }
}

//Selection Sort Function
int* selection_sort(int* array,int length)
{
    int i,j,temp,min_idx;
    //first loop
    for(i=0;i<length;i++)
    {
        min_idx = i;
        //second loop
        for(j=i+1;j<length;j++)
        {
            //comparision and swapping
            if(array[j] < array[min_idx])
            {
                    min_idx = j;
            }
        }
        temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
    return array;
}

//Main function
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
    //empty array creation
    int* sorted_array;
    sorted_array = (int*)malloc(length*sizeof(int));
    //calling the bubble sort function and storing the return value in a array
    sorted_array = selection_sort(array,length);
    //printing the sorted list
    cout<<"The Sorted Array is : ";
    display_array(sorted_array, length);
    return 0;
}

//Time Complexity is: O(N^2)