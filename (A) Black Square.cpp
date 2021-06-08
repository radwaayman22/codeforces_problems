#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0;
    int a1=0;
    int a2=0;
    int a3=0;
    int a4=0;
  int arr[4];
   for(int i=0; i<4;i++){
    cin>>arr[i];
   }
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++){
        if(s[i]=='1'){
            a1++;
        }
        else if(s[i]=='2'){
            a2++;
        }
         else if(s[i]=='3'){
            a3++;
        }
        else{
            a4++;
        }
  }


  sum=a1*arr[0]+a2*arr[1]+a3*arr[2]+a4*arr[3];
     cout<< sum<<endl;
      return 0;
}
