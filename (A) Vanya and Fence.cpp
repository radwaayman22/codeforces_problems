#include <iostream>

using namespace std;

int main()
{
    int num=0;
    cin>>num;
    int hight=0;
    cin>>hight;
    int a=0;
    int count1=0;
    int count2=0;
    int width=0 ;
    for(int i =0;i<num;i++){
        cin>>a;
        {

            if(a<=hight){
               count1=count1+1;
            }
            else{
                count2=count2+2;
            }
        }
    }
    width =count1+count2;
    cout << width  << endl;
    return 0;
}
