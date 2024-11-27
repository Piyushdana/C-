#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



// 1)
// *****
// *****
// *****
// *****
// *****
void pattern1(int n){

    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
}
// 2)
// ******
// *    *
// *    *
// *    *
// *    *
// ******
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i == n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}
// 3)
// *
// **
// ***
// ****
// *****
void pattern3(int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
}
// 4)
//     *
//    **
//   ***
//  ****
// *****
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        
        cout<<endl;
        
    }
}
// 5)
// *****
// ****
// ***
// **
// *
void pattern5(int n){
for (int i = n; i >0 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}

// 6)
// *****
//  ****
//   ***
//    **
//     *
void pattern6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            
            if(j<=i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
}

// 7
// *
// **
// * *
// *  *
// *****
void pattern7(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            
            if(j == 0 || j == i - 1 ||i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
        
    }
    
}
// 8)
//     *    
//    ***
//   *****
//  *******
// *********
void pattern8(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for (int j = 0; j < 2*i+1; j++)
        {   
            cout<<"*";
        }
        
    
        for(int j=0;j< n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
}