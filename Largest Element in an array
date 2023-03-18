#include<bits/stdc++.h>
using namespace std;

// Function to Input the element in array
int input_array_elements(int arr[], int size){
    cout<<endl<<"Enter the elements in array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return 0;
}

// Function to Print the element 
int print_array(int arr[], int size){
    cout<<endl<<"Array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Function to find the largest element in array.

// 1. Optimal Approach
int largest_element_in_array(int arr[], int size){
    int largest = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[100], size;
   
    cout<<"Enter the size: ";
    cin>>size;
    
    input_array_elements(arr,size);
    print_array(arr,size);

    int largest = largest_element_in_array(arr,size);
    cout<<endl<<"Largest Element in array is: "<<largest;
    
    return 0;
}
