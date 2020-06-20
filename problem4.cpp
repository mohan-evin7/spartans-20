#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        while(n>0)
        {
            n=n/5;
            x=x+n;
        }       
        cout<<x<<"\n";
    }
	return 0;
}