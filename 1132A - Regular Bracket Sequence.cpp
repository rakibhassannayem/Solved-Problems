#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c1=0,c2=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0; i<=s.size(); i++)
        {
            if(s[i]=='(')
                c1++;
            if(s[i]==')')
                c2++;
        }
        if(c1==c2)
        {
            cout<<c1+c2<<endl;
        }
    }

    return 0;
}
