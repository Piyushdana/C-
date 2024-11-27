#include <iostream>
#include <algorithm>
#include<bits/stdc++.h> 
using namespace std;


// Hashing Example One for numbers
 int main(){    
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    
    // Taking array input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Hash Array Precompute Values
        int hash[13]={0};
        for(int i=0;i<n;i++){
           hash[arr[i]]+=1;
        }

    // Queries
    int q;
    cout<<"Enter Total number of Quaries you want to know";
    cin>>q;
    // Print ans of quaries
    while (q--)
    {
       int number;
       cout<<"Enter the number you want ot know about";
       cin>>number;

        // fetch
        cout<<" Total number of time Number"<< number << " appeared are :-  "<<hash[number]<< endl;
    }
    return 0;
}



// Hashing Example 2 for characters

// int main(){
//     string s;
//     cout<<"Enter s";
//     cin>>s;

//     // Hashing precomputation
//     int hash[256]={0};  //Use 256 size to hash the all 256 hcarcters and if want to hash lower case character then use26
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }
//     // Quaries 
//     int q;
//      cout<<"Enter the Total quaries  you want ot know about ";
//     cin>>q;
//     // fetch teh hash tabel
//     while(q--){
//         char c;
//         cout<<"Enter the Character you want ot know about ";
//         cin>>c;        
//         cout<<" Total number of time Character"<< c << " appeared is :-  "<<hash[c]<< endl;
//     }

//     return 0;

// }


// Hashing Example 3, With map
int main(){
    int n;
    cout<<"enter total number of  array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"ENter the array";
        cin>>arr[i];
    }

    //pre Compute
    map<int,int>mpp;
    for(int i= 0;i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"ENter the Total Quaries";
    cin>>q;

    while (q--)
    {   
        int number;
        cout<<"ENter the  Quaries";
        cin>>number;

        // Fetch   
        cout<<"The total number of"<<number <<"appeared"<<mpp[number];
        // cout<<mpp[number]<<endl; 
    }
    
    return 0;
    
}