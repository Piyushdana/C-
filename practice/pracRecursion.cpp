#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


// void printNTimes(int n){
//           if (n<1) {
//             return;
//           }
//           cout<<n;
//           printNTimes(n-1);
//         }
		
// int main(){
// 	int n;
// 	cin>>n;
// 	printNTimes(n);
// }


void func(int i , int n, int arr[]){
    if(i>= n/2){
        return;
    }

    swap(arr[i],arr[n-i-1]);
    func(i+1,n,arr);
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    func(0,n,arr);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}




// void sumFirstN(int n,int sum) {
   
//     if(n<1){
//         cout<<sum<<endl;
//         return;
//     }
   
//    sumFirstN(n-1, sum+n);
// }

// int main(){
//     int n;
//     int sum =0;
//     cin>>n;
//     sumFirstN(n,sum);

//     return 0;
// }



// // 1stQ 31-3-2024 Count number of even and odd elements in an array
// int totalCounts(int arr[], int n){
//     int oddCount = 0;
//     int evenCount=0;

//     for (int i = 1; i <=n; i++)
//     {
//        if(arr[i] % 2 == 0 ){
//         evenCount += 1;

//        }else{
//         oddCount+=1;
//        }
//     }

//     cout<<"Total Number of OddCount is"<< oddCount << "total number of EvenCount is" <<evenCount<< endl;
// }



// int main(){

//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin>>arr[i];
//     }

//     // totalCounts(arr, n);

//     return 0;
     
// }



//// 2Q 31-3-2024


// int sum(int arr[], int n ){
//     if(n<=0){
//         return 0;
//     }

//     return (sum(arr, n-1) + arr[n-1]); 
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n;  i++)
//     {
//        cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

//     cout<<sum(arr,n);



// }


 



 

