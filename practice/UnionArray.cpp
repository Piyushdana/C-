#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


int main(){
    int n1,n2;
    cout<<"Enter n1 &n2";
    cin>>n1>>n2;

    vector<int> a(n1), b(n2);

    cout << "Enter elements for vector a:\n";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    // Read elements for vector b
    cout << "Enter elements for vector b:\n";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }



    set<int> st;

    for(int i=0;i<n1; i++){
        st.insert(a[i]);
    }

    for(int i=0;i<n1; i++){
        st.insert(b[i]);
    }

    vector <int> temp(st.begin(),st.end()); 
    cout << "The resulting vector is: ";
    for (int element : temp) {
        cout << element << " ";
    }
    cout << endl;


    return 0;
}
