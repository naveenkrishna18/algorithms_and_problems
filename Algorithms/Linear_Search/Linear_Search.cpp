//Linear Search Algorithm in c++
#include<iostream>
#include<stdlib.h>
using namespace std;

//Linear Search Function
int Linear_Serach(int* array,int key, int length)
{
    //loop to iterate to every element
    for(int i=0;i<length;i++)
    {
        //comparision
        if(array[i]==key)
        {
            //return the position
            return i;
        }
    }
    return -1;
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
    int key;
    cout<<"Enter the element to search : ";
    cin>>key;
    //calling the function
    int result;
    result = Linear_Serach(array,key,length);
    //printing the result
    if (result>=0)
    {
        cout<<"The Element is found in position "<<result;
    }
    else
    {
        cout<<"The Element is not in the array";
    }
}   