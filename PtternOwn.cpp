
#include <iostream>
#include <algorithm>
using namespace std;



void pattern7(int n){

    for(int i=0;i<n;i++){

        // To add space 
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
void pattern8(int n){

// *********
//  *******
//   *****
//    ***
//     *  
    // One Way to solve this pattern 
    for(int i=0;i<n;i++){

        // To add space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for (int j = 0; j < 2*n - (2*i+1); j++)
        {   
            cout<<"*";
        }
        
    
        for(int j=0;j<i;j++){
            cout<<" ";
        }

    cout<<endl;

    }

    // Second way to solve this pattern
    // for (int i = 0; i < n; ++i) {
    //     // Loop for printing spaces
    //     for (int j = 0; j < i; ++j) {
    //         std::cout << " ";
    //     }
    //     // Loop for printing stars
    //     for (int k = 0; k < numStars; ++k) {
    //         std::cout << "*";
    //     }
    //     std::cout << std::endl;
    //     // Decrease number of stars for the next row
    //     numStars -= 2;
    // }



}
//  pattern 9 is the combination of pattern 7 and 8 so we can combine it and get teh pattern
void pattern10(int n){
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// first way to get this is this one,  by making one right angle triangle then again 
// printing that in reverse order by decreasing one line
    // for (int i = 1; i <= n; i++)
    // {
    //     for(int j=1;j<=i;j++){  
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = n-1; i >0; i--)
    // {
    //     for(int j=1;j<=i;j++){  
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
// first way to ends here 

// Second way to do this is by

    // for (int i=1;i<=2*n-1;i++){ 
    //     int stars = i;
    //     if (i>n)
    //     {
    //         stars=2*n-i;
    //     }
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
 
}
void pattern11(int n){
// 1
// 01
// 101
// 0101
// 10101
// 010101
    // int start=1;

    // for(int i=0;i<n;i++){
    //     if(i%2==0) start=1;
    //     else start=0;
    //     for(int j=0;j<=i;j++){
    //         cout<< start;
    //         start=1-start;
    //     }
    //     cout<<endl;
    // }
}
void pattern12(int n){
    // int space=2*n-1;
    // for(int i=1;i<=n;i++){
    //     // number
    //     for(int j=1;j<=i;j++){
    //         cout<< j;
    //     }

    //     // Space
    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }

    //     // Number
    //     for(int j=i;j>=1;j--){
    //         cout<<  j;
    //     }

    //     cout<<endl;
    //     space -= 2;
    // }
}
void pattern13(int n){
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
    // int num=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<num<<" ";
    //         num+= 1;
            
    //     }
    //     cout<<endl;
    // }
}

void pattern14(int n){
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F
    // for(int i=0;i<=n;i++){
    //     for(char ch='A';ch<='A'+i;ch++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
}
void pattern15(int n){
// A B C D E
// A B C D
// A B C
// A B
// A
    // for(int i=n;i>0;i--){
    //     for(char ch='A'; ch<='A'+i;ch++){
    //         cout<<ch<<" ";
    //     }

    //     cout<<endl;
    // }
}
void pattern16(int n){
// A 
// B B 
// C C C 
// D D D D 
// E E E E E
//     for(int i=0;i<n;i++){
//         char ch= 'A'+i;
//         for(int j=0; j<=i;j++){
//             cout<<ch<<" ";
//         }

//         cout<<endl;
//     }
}
// need to do 17th one agin not done 
void pattern17(int n){


//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //      char ch = 'A';
    //      int breakpoint = (2*i+1)/2;
    //         for(int j=1;j<=2*i+1;j++){
    //         cout<<ch;
    //         if (j<=breakpoint) ch++;
    //         else ch--;
    //     }


    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }


    //     cout<<endl;
    // }
}
void pattern18(int n){
// E
// DE
// CDE
// BCDE
// ABCDE
    for (int i = 0; i < n; i++)
    {
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
    
}
void pattern19(int n){
    int Space=0;
    for(int i=0;i<=n;i++){
        // start
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        // space
        for(int j=0;j<Space;j++){
            cout<<" ";
        }
        // star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        Space+=2;
        cout<<endl;
    }
    int space=8;
    for(int i=1;i<=n;i++){
        // start
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // space
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        // star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        space-=2;
        cout<<endl;
    }
    
}
void pattern20(int n){
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
    int space=2*n-2;    
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if (i>n) star=2*n-i;


        // star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        // Space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        // star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space += 2;
    }
}
void pattern21(int n){
// *****
// *   *
// *   *
// *   *
// *****
   for(int i = 0 ;i<n;i++){
    for(int j=0;j<5;j++){
        if(i==0 || i == n-1 || j== 0 || j== n-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }   
    cout<<endl;   
   } 
}
void pattern22(int n){
    
}
int main(){


    // int t;
    // cin>>t;

    // for (int i = 0; i < t; i++)
    // {
    //     int n;
    //     cin>>n;
    //     pattern7(n);
    // }

    int n;
    cin>>n;

    // to get pattern we can combine both pattern 7 and 8
    // pattern7(n);
    // pattern8(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n); 
     pattern21(n);

    
}

