#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{string str;
 cin>>str;
 int c=0;
 int len=str.size();
 while(len>1){
        int sum=0;
    for(int i=0;i<len;i++){
       sum+=str[i]-'0';
 }

    str=to_string(sum);
    len=str.size();
    c++;
 }

 cout<<c<<endl;

    return 0;
}
