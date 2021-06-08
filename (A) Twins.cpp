#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   int n;
    int sum1=0;
    int sum2=0;
    int counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum1=sum1+arr[i];
    }
     sum1=sum1/2;
     sort(arr,arr+n);
     for(int i=n-1;i>=0;i--){
       sum2=sum2+arr[i];
       ++counter;
    if(sum2>sum1){
        break;
    }
     }

    cout << counter<< endl;
    return 0;
}