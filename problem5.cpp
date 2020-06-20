#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    char s[1000];
    stack <char> st;
    while (t--)
    {
        cin>>s;
        int n = strlen (s);

        for(int i=0;i<n;i++ )
        {
            if(isalpha(s[i]))
                cout << s[i];
            else if(s[i] == ')' )
            {
                cout << st.top ();
                st.pop ();
            }

            else if (s[i] != '(' )
                st.push (s[i]);
        }

        cout << "\n";
    }

    return 0;
}
