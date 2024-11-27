#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    int q;
    cout << "Enter the total ch You want to know";
    cin >> q;

    while (q--)
    {
        char c;
        cin >> c;
        cout << "Enter Query";
        cout << "Totla number of time " << c << " Appeared is " << hash[c] << endl;
    }

    return 0;
}

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     // Storing Hashing pre fetching
//    int hash [13] ={0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]+=1;
//     }
//      int q;
//     cout<<"Enter Total number of Quaries you want to know";
//     cin>>q;
//     // Print ans of quaries
//    while (q--)
//     {
//        int number;
//        cout<<"Enter the number you want ot know about ";
//        cin>>number;
//         // fetch
//         cout<<" Total number of time Number"<< number << " appeared are :-  "<< hash[number]<< endl;
//     }
//     return 0;
// }


