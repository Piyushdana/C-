#include <iostream>
using namespace std;


int main(){

    ////////////////////////////////////////////////////////
    // Pattern1
        // ****
        // ****
        // ****
        // ****
    // int rows, col; 
    // cout<<"Enter Rows and column"<< endl;
    // cin>> rows >> col;
    // for(int i=1;i<=rows;i++){
    //     for(int j=1;j<=col;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    ////////////////////////////////////////////////////////

    // Pattern2
        // ****
        // *  *
        // *  *
        // ****
        // int row, col;
        // cin>> row >> col;

        // for(int i=1;i<=row;i++){
        //     for(int j=1;j<=col;j++){
        //         if(i==1 || i==row){
        //             cout<<"*";
        //         }else if(j==1 || j==col){
        //             cout<<"*";
        //         }else{
        //             cout<<" ";
        //         }
        //     }

        //     cout<<endl;
        // }

    ////////////////////////////////////////////////////////

   //Pattern3
    // *****
    // ****
    // ***
    // **
    // *
    // int n;
    // cin>>n;

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    ////////////////////////////////////////////////////////

    // Pattern4
    // *
    // **
    // ***
    // ****
    // *****
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    ////////////////////////////////////////////////////////

    // Pattern5
    //     *
    //    **
    //   ***
    //  ****
    // *****
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=n;j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }

    //     cout<<endl;
    // }

    ////////////////////////////////////////////////////////
    
    // Pattern6
    // 1
    // 22
    // 333
    // 4444
    // 55555
    // int row, col;
    // cin>>row>>col;

    // for (int i = 1; i <=row; i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    ////////////////////////////////////////////////////////

    // Pattern7
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // int row, col;
    // cin>>row>>col;

    // int count=1;
    // for (int i = 1; i <=row; i++){
    //     for(int j=1;j<=i;j++){
    //         cout<< count <<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    ////////////////////////////////////////////////////////

    // Pattern 8
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     int space = 2*n - 2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
        
    //     int space = 2*n - 2*i;
    //     for(int j=1; j<=space;j++){
    //         cout<<" ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // // Pattern 9
    // 12345
    // 1234
    // 123
    // 12
    // 1
    // int n;
    // cin>> n;
    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<< j ;
    //     }

    //     cout<< endl;
    // }


    // Pattern 10

    //  1
    //  0  1
    //  1  0  1
    //  0  1  0  1
    //  1  0  1  0  1

    // int n; 
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if ((i+j)%2==0)
    //         {
    //             cout<< " 1 ";                
    //         }else{
    //             cout<< " 0 "; 
    //         }
            
    //     }


    //     cout<< endl;
    // }


    // Pattern 11 Rhombus pattern 
    //     *****
    //    *****
    //   *****
    //  *****
    // *****
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=n-i;j++){
    //         cout<< " ";
    //     }

    //     for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }


    // Pattern 12 
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=n-i;j++){
//             cout<<" ";
//         }

//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }

//         cout<<endl;
//     }


    // Pattern 13 Palindromic pattern 

//     1
//    232
//   34523
//  4567234
// 567892345

//     int n;
//     cin>>n;

//     for(int i=1; i<=n;i++){
        
//         int j;
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }

//         int k=i;
//         for(;j<=n;j++){
//             cout<<k++;
//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<k++;
//         }

//         cout<<endl;
//     }


    // Pattern 14 
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";

//         }

//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";

//         }

//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }



    // Pattern 15 ZIG ZAG

    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }else{
                cout<<" ";
            }


        }

        cout<<endl;
    }
    return 0;

}