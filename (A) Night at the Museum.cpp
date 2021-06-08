#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int start=0;
    int letter=0;
    int move_num=0;
    for (int i =0;i<len;i++){
            letter=str[i]-97;
            int m=abs(start-letter);
            if(m<13){
            move_num+=m;
            }
            else{
                move_num+=26-m;
            }
            start=letter;
    }

    cout << move_num << endl;
    return 0;
}
