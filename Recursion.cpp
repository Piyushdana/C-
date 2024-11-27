#include <iostream>
#include <algorithm>
using namespace std;


// Recursion is when the function calls itself until the specified condition is met
// Basic Problems Q with recursion 


// 1) print the name until the specific condition
    // void print(int i,int n){
    //     if(i>n){
    //         return;
    //     }
    //     cout<<"Piyush"<<endl;
    //     print(i+1,n);
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     print(1,n);
    // }


// 2)Print linearly from 1 to n
    // void print(int i,int n){
    //     if(i>n){
    //         return;
    //     }

    //     cout<< i <<endl;
    //     print(i+1,n);
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     print(1,n);
    // }



// 3)Print linearly from n to 1
    // void print(int i,int n){
    //     if(i<1){
    //         return;
    //     }

    //     cout<< i <<endl;
    //     print(i-1,n);
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     print(n,n);
    // }


// 4)Print linearly from 1 to n Without using 1+1 Do with the concept of backtracking
    // void print(int i,int n){
    //     if(i<1){
    //         return;
    //     }

         
    //     print(i-1,n);
    //     cout<< i <<endl;
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     print(n,n);
    // }

// 5)Print linearly from n to 1 Without using 1+1 Do with the concept of backtracking
    // void print(int i,int n){
    //     if(i>n){
    //         return;
    //     }
    //     print(i+1,n);
    //     cout<< i <<endl;
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     print(1,n);
    // }

// 6) Sum of n numbers Parameterized way 
    // void print(int i,int sum){
    //     if(i<1){
    //         cout<<sum;
    //         return;
    //     }

    //     print(i-1,sum+i);
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     print(n,0);


    //     return 0;
    // }

// // 6) Sum of n numbers Functional way 
//     int print(int n){
//         if(n==0){
//             return 1;
//         }
//        return n * print(n-1);
//     }
//     int main(){
//         int n;
//         cin>>n;
//         cout<<print(n);
//         return 0;
//     }

// 7) To Swap numbers in an array

    // void print(int l,int r,int arr[]){
    //     if(l>=r){
    //         return;
    //     }
    //     swap(arr[l], arr[r]);
    //     print(l+1 , r-1,arr);
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     int arr[n];

    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     print(0,n-1,arr);
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     return 0;
    // }

    // void print(int n,int i, int arr[]){
    //     if(i>=n/2){
    //         return;
    //     }

    //     swap(arr[i],arr[n-i-1]);
    //     print(n, i+1,arr);
    // }

    // int main(){
    //     int n;
    //     cin>>n;
    //     int arr[n];

    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>arr[i];
    //     }
    //     print(n,0,arr);
    //     for (int i = 0; i < n; i++) {
    //          cout<<arr[i]<<" ";
    //     }
    //     return 0;
    // }

// 8) To check weather the string is palindrome or not 
    // bool print(int i, string s){
    //     if(i>=s.size()/2){
    //         return true;
    //     }
    //     if(s[i] != s[s.size()-i-1]){
    //         return false;
    //     }
    //     return print(i+1, s);
    // }
    // int main(){
    //     string n;
    //     cin>>n;
    //     cout<< print(0,n);
    //     return 0;
    // }


// 9)Fibonacci series with multiple recursion calls
    // int print(int n){
    //     if(n<=1){
    //         return n;
    //     }

    //     int last = print(n-1);
    //     int sLast =print(n-2);
    //     return last+sLast;
    // }
    // int main(){
    //     int n;
    //     cin>>n;

    //     cout<<print(n);
    // }




//     #include <iostream>

// using namespace std;
    // void print(int i,int n,int arr[]){
    //     if(i>n){
    //         return;
    //     }

    //     cout<< arr[i] <<endl;
    //     print(i+1,n,arr);
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     print(1,n,arr);
    // }


    
// // Fill the array with n number without using loops
//  #include <iostream>
// using namespace std;

// void printDescendingArray(int i, int n, int arr[]) {
//     if (n < i) {
//         return;
//     }
//     arr[i] = n;
//     cout << arr[i] << " ";
//     printDescendingArray(i + 1, n , arr);
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     int arr[n];

//     // Print and fill the array with values from n to 1
//     printDescendingArray(0, n, arr); // **Corrected line:** Start with index 0

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int n;
        cin>>n;
        int t1=0;
        int t2=1;
        int nextTerm;

        for(int i=0;i<=n;i++){
                nextTerm=t1+t2;
                t1=t2;
                t2=nextTerm;
        }

        cout<<nextTerm;

        
}
