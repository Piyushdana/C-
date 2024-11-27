#include <iostream>
#include <climits>
#include<math.h>


using namespace std;

// 1) Simple array Taking input from user 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

//     return 0;
// }

// 2)Finding maximun And minimum from the array
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     int maxNo= INT_MIN;
//     int minNo= INT_MAX;
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }


//     for(int i=0;i<n;i++){
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
 
//     cout<<maxNo<<minNo;
// }


// 3)Number is present in Array or not 

// int Search(int n,int key,int arr[]){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//      return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
     
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the key to search";
//     cin>>key;
//     cout<<Search(n,key,arr);
// }

// 4) Find the largest among the array 

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];

	

// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}

// 	int largest= arr[0];

// 	for(int i=0;i<n;i++){
// 		if(arr[i] > largest){
// 			largest=arr[i];
// 		}

// 	}


// 	cout<<"The largest element is "<< largest;


// 	return 0;
// }



// 5) Find the Second largest among the array 	

/*int main(){

	int n;
	cin>>n;	
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int largest=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"Your largest is"<<largest<<endl;
	int SLargest= -1;
	for(int i=0;i<n;i++){
		if(arr[i]!=largest && arr[i]>SLargest){
			SLargest=arr[i];
		}
	}
	cout<<"Your Slargest is"<<SLargest;
}*/

 


     class Solution {
    public:
        bool check(vector<int>& nums) {
            int n = nums.size();
            int rotationPoint = -1;

            // Find the index where ascending order is disrupted
            for (int i = 1; i < n; ++i) {
                if (nums[i] < nums[i - 1]) {
                    rotationPoint = i;
                    break;
                }
            }

            // If the array is already sorted, or it's not rotated
            if (rotationPoint == -1)
                return true;

            // Check if the remaining elements maintain non-decreasing order
            for (int i = rotationPoint + 1; i < n; ++i) {
                if (nums[i] < nums[i - 1])
                    return false;
            }

            // Check if the last element is greater than the first element
            return nums[n - 1] <= nums[0];
        }
    };

