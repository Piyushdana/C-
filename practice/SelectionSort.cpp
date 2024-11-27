#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;




void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void selectionSort(int arr[], int n){
    int small;
    for (int i = 0; i < n-1; i++)
    {
        small = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[small]){
                small = j;
            }
        }


        
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;   
    }
}

void bubbleSort(int arr[], int n){
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
        
    }
    
}


// key =2 , j= 15
// [15,2,6,8,4,3]
void insertionSort(int arr[], int n){
    int key, j;
    
    for (int i= 1; i <= n-1; i++)
    {   

        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j] > key)
        {
             arr[j+1] = arr[j];
             j--;
        }
        arr[j+1] = key;
    }
    
}

int main(){

    int arr[] = {12,54,65,7,23,9};
    int n= sizeof(arr)/sizeof(arr[0]);

     cout<<("Before sorting array elements are - \n");  
     printArr(arr, n);
    //  selectionSort(arr, n);
    //  bubbleSort(arr, n);
        insertionSort(arr, n);
     cout<<("After sorting array elements are - \n");  
     printArr(arr, n);

     return 0;

}