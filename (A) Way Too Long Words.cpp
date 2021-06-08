#include <iostream>

using namespace std;

int main()
{int x,n;
string s;
cin>>n;
for(int i=0;i<n;++i){
cin>>s;
x=s.length();
    if(x>10){
                cout <<s[0]<<x-2<<s[x-1] << endl;
    }
    else {
                        cout <<s<<endl;

    }
}
    return 0;
}
