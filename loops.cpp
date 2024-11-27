#include<iostream>
using namespace std;

int main(){
    // int a;
    // int b;
     
    //    cout << "Enter the Number: " << endl;
    //    cin >> a;
    //    cin>>b; 

    // //    for(int i=0; i<=a ; i++){ 
    //     cout << "I am Piyush" << endl;
    //    }
    
    // while (a>0){
    //     cout <<a;
    // } 

    //  int sum = 0;
    // do
    // {   
    //     sum+=a;
    //     cout << sum << endl;
    //     a--;
    // } while (a>=0);

    // break continue;
    // for (int num=a;num<=b;num++){
    //     int i;
    //     for(i=2;i<num;i++){
    //         if(num%i==0){
    //             break;
    //         }
    //     }
    //     if (i==num){
    //         cout<< num << endl;
    //     }     
    // }

    // Switch'

    char button;
    cout<<"Enter the butto"<<endl;
    cin>> button;

    switch (button)
    {
    case 'a':
        cout<<"Piyush"<< endl;
        break;

    case 'b':
        cout<<"dana"<< endl; 
        break;
    
    case 'c':
        cout<<"Piyush2"<< endl;
        break;

    case 'd':
        cout<<"Piyush3"<< endl;
        break;
    
    default:
        cout <<" No mkmk found "<< endl;
        break;
    }


    return 0;
}