//Bubble Sort Algorithm in c++
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

//Bubble Sort Function
int* bubble_sort(int* array, int length)
{
    int i,j,temp;
    //first loop
    for(i=0;i<length;i++)
    {
        //second loop
        for(j=0;j<length - i - 1;j++)
        {
            //comparision and swapping
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;    
            }
        }
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
    sorted_array = bubble_sort(array,length);
    //printing the sorted list
    cout<<"The Sorted Array is : ";
    display_array(sorted_array, length);
    return 0;
}