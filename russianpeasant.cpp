#include <iostream>
using namespace std;
int main()
{
    int a,b,res=0;
    cin>>a>>b;
    while(b!=0)
    {
        if(b&1)
        {
            res=res+a;
        }
        a=a<<1;
        b=b>>1;
    }
    cout<<res;

    return 0;
}
