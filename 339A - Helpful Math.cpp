#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    for(int i=2; i<s.size(); i+=2)
    {
        if(s[i]<s[i-2])
        {
            swap(s[i],s[i-2]);
            i=0;
        }
    }
    cout<<s<<endl;

    return 0;
}
