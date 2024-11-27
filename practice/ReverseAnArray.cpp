#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


// reversing an array using different Methods


// bool func(int i , string &s){
//     if(i >=s.size()/2) return true;
//     if(s[i] != s[s.size()-i-1]) return false;
//     return func(i+1,s);
// }

// int main(){ 
//     string s ="madam";
//     cout<< func(0,s);
//     return 0;
// }


void fibonaaci(int a, int temp,  int n ,int i){
    if(i>n-1){
        return;
    }

    int result = a+temp;
    cout << result << " ";

    a= temp;
    temp=result;

    fibonaaci( a,  temp,   n , i+1);

}   
int main(){
    int n;
    cin>>n;

    int a=0;
    int temp=1;
    cout<<a<<temp;
    fibonaaci(a, temp, n ,2); 
    return 0;
}







// 1)using for loop
// int main(){

//     int arr[]= {10,20,51,13,54,15,55};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for (int i = n-1; i >= 0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
    
// }

// Using Swapping
// int main(){
//     int arr[]={10,20,51,45,12};
//     int n= sizeof(arr)/sizeof(arr[0]);

//     int start = 0, end = n-1;

//     while (start<end){
//         swap(arr[start++], arr[end--]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
    

// }


// using Recursion
// void reverseFunc(int s, int arr[], int e){
//     if(s>=e){
//         return;
//     }

//     //  int temp = arr[s];
//     //  arr[s]= arr[e];
//     //  arr[e]=temp;

//      swap(arr[s],arr[e]);
//      reverseFunc(s+1,arr,e-1);
    
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     reverseFunc(0,arr,n-1);

//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i];
//     }
    
// }


// Using reverse inbuilt function
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);

//     reverse(arr,arr+n);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
    
// }