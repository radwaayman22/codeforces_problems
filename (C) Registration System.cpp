#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
string s;
int n;
cin>>n;
map <string, int> user;

for(int i=0;i<n;i++){
   cin>>s;
        if(user.count(s)==0){
            cout<<"OK"<<endl;
            user[s]=1;
        }
        else{
            cout<<s<<user[s]<<endl;
            user[s]++;
        }
}

    return 0;
}
