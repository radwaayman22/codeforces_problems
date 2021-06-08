#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2 [n];
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<n;i++){
        arr2[arr1[i]]=i+1;
    }
     for (int i=1;i<=n;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}