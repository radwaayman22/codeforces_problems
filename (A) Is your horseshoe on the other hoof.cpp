#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=4;
    int arr [5000];
    for (int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for (int i=0;i<4;i++){
        if(arr[i]!=arr[i+1]){
           counter--;

    }
    }

    cout << counter << endl;
    return 0;
}
