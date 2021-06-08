#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>n>>m;

    for(int i=0;i<15;i++){
        if(n==arr[i]&&m==arr[i+1]){
            cout << "YES" << endl;return 0;

        }
        }
             cout << "NO" << endl;


    return 0;
}
