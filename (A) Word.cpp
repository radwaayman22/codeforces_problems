#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
string word;
cin>>word;
int count1=0;
int count2=0;
char new_arr;
int n=word.length();
char arr[n+1];
strcpy(arr,word.c_str());
for (int i=0 ;i<n;i++){
        if( islower(arr[i])){
            count1++;
        }
        else{
        count2++;
        }
}
if(count1>=count2){
    for(int i=0 ;i<n;i++){
    new_arr=tolower(arr[i]);
    cout<< new_arr;

}
}
else{
        for(int i=0 ;i<n;i++){
        new_arr=toupper(arr[i]);
        cout<< new_arr;
}
}
    return 0;
}
