#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,top,a,b;
    cin>>n;
    cin>>top;
    for(int i=0 ;i<n;i++){
        cin>>a>>b;
        if(a==top||top==(7-a)||b==top||top==(7-b))
           {cout<<"NO"<<endl;return 0;}
}
           cout<<"YES"<<endl;
           return 0;
}
