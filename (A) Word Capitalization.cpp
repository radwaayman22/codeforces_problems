#include <iostream>

using namespace std;

int main()
{string a;
cin>>a;
for(int i=0;i<=a.length();i++){
a[0]=toupper(a[0]);
}
cout<<a<<endl;

        return 0;
}
