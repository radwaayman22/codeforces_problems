#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    int max_num=0;
    cin>>a>>b;
     if(a>b){
        max_num=a;
     }
     else{
        max_num=b;
     }
          string arr[]={"1/6","1/3","1/2","2/3","5/6","1/1"};

        cout<<arr[6-max_num]<<endl;
        return 0;
}
