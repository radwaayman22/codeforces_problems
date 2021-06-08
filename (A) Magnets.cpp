#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr [100000];
    int counter=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
        if(arr[j+1]!=arr[j]){
            counter++;
       }
    }
    cout << counter << endl;
    return 0;
}
