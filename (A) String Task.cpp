#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s,ss;
    cin>>s;
    for(int i=0;i<=s.length()-1;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
		continue;
		else{
               	ss+='.';
		       ss+=towlower(s[i]);
		}
    }
    cout<<ss;
    return 0;
}
