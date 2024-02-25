#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    int j;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            continue;
        }
        else
        {
            cout<<'.'<<s[i];
        }
    }
    cout<<"\n";
    return 0;
}
