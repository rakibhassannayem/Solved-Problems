#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,d;
    int i;
    cin>>s>>d;
    for(i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
        d[i]=tolower(d[i]);
    }

    if(s==d)
        cout<<"0"<<endl;
    else
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>d[i])
            {
                cout<<"1"<<endl;
                break;
            }
            if(s[i]<d[i])
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    return 0;
}
