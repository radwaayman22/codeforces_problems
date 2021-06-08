#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr [n];
    int countS=0;
    int countD=0;
    int maxCard=0;
    int j=n-1;
    int c=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
        int i=0;

     while(i<=j){
     if(arr[i]>arr[j]){
                maxCard=arr[i];
                i++;
            }
            else{
                maxCard=arr[j];
                   j--;
                }

             if(c%2==0){
                countS=countS+maxCard;
            }
            else{
                countD=countD+maxCard;

            }
            c++;


}
cout<<countS<<" "<<countD<<" ";

    return 0;
}
