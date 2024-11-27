#include <iostream>
#include <bits/stdc++.h>


#include <math.h>

using namespace std;

void selectionSort(int arr[],int n ){
     for (int i = 0; i <= n-2; i++)
    {    
        int min = i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[min]){
                 min = j;
            } 
        }
        swap(arr[min] , arr[i]);
    }
}

void bubbleSort(int arr[], int n){
    for(int i= n-1; i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    

return 0;

}