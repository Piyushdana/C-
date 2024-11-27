#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;



void PrintName(int n){
    if(n <= 0) return;
    cout<<"Piyush";
    PrintName(n-1);
}

void PrintNums(int i, int n){
    if( i > n) return;
    cout<<  i;
    PrintNums(i+1, n);
}

int PrintSum(int n){
    if(n <= 0) return 1;
    
    return n * PrintSum(n-1);
}


void ReverseArray(int l, int r, int arr[]){
    if(l>=r) return;

    swap(arr[l], arr[r]);
    ReverseArray(l+1, r-1, arr);
}


bool PalindromString(int i , string s){

    if(i>=s.size()/2){
        return true;
    }

    if(s[i] != s[s.size()-i-1]){
        return false;
    }

   return PalindromString(i+1, s);

}

int fibonacci(int n){
     if(n<=1) return n;

     return fibonacci(n-1)  + fibonacci(n-2);
}

int main(){ 
    int n;
    cin>>n;
    int arr[n];
    string s;
    cin>>s;
      

    cout<<fibonacci(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // PrintNums(1, n);
    // PrintName(n);
    // cout<<PrintSum(n);
    // ReverseArray(0, n-1 ,arr);
    // cout<<PalindromString(0, s);
       
    // for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    // }

    return 0;  
}

  
    
 
 