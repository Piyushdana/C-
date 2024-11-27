#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



void rotate(int n, int arr[],int d){
    // d=d%n;
    // int temp[d];

         reverse(arr, arr+d);
         reverse(arr+d, arr+n);
         reverse(arr, arr+n);

    // for (int i = 0; i<=d; i++)
    // {
    //     temp[i] = arr[i];
    //     cout<<temp[i];
    // }
    // for (int i = d; i < n; i++)
    // {
    //     arr[i-d] = arr[i];
    // }

    // for (int  i = n-d; i < n; i++)
    // {
    //     arr[i] = temp[i-(n-d)];
    // }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }


    int d;
    cin>>d;

    rotate(n,arr,d);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i];
    }
    return 0;

}