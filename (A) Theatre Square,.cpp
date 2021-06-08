#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double m,n,a;
    long long total;
    cin>>m>>n>>a;
    total=ceil(m/a)*ceil(n/a);
    cout<<total<<endl;
    return 0;
}
