#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
int counter=1;
int j=0;
string str;
string ins;
cin>>str;
cin>>ins;
for(int i =0; i<ins.size();i++){
    if(str[j]==ins[i]){
    counter++;
    j++;
    }
}
cout<<counter<<endl;
    return 0;
}
