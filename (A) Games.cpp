#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int for_home[n];
    int for_guest[n];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>for_home[i]>>for_guest[i];
    }
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<n ;j++){
        if(for_home[i]== for_guest[j])
           counter++;
        }
    }
cout<<counter;
    return 0;
}
