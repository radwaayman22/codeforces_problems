#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr [250];
    int counter=0;
    int n,q,p;
    cin>>n;
    cin>>p;

    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    cin>>q;
     for(int i=p;i<q+p;i++){
        cin>>arr[i];
    }

    sort(arr,arr+(q+p));

    for(int i=0;i<(q+p);i++){
       if(arr[i]!=arr[i+1]){
        counter++;
       }
    }
       if(n==(counter)){
         cout << "I become the guy." <<endl;
       }
       else{
        cout << "Oh, my keyboard!" << endl;
    }

     return 0;
}
