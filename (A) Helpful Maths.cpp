#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    /*string s ;
    cin>>s;
    int n = s.length();
    char arr[n + 1];
    strcpy(arr, s.c_str());
    for (int i = 0; i < n; i++) {
        if (arr[i]=='+'){
            arr[i] = arr[i + 1];
        }

    }
 for (int i = 0; i < n; i++) {
            cout<<arr[i];
        }*/
        string s ;
        cin>>s;
        for (int i = 0; i < s.length(); i++) {
        if (s[i]=='+'){
            s.erase(i,1);
        }
        }
         sort(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++) {
                if (i%2!=0){
                    s.insert(i,"+");
                    }
                }
          cout<<s<<endl;
    return 0;
}
