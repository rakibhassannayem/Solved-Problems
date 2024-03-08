#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a[1000],c=0;
    cin>>n>>k;

    for(i=1; i<=n; i++)
        cin>>a[i];

    for(i=1; i<=n; i++)
    {
        if(a[i]>=a[k] && a[i]>0)
            c++;
    }

    cout<<c<<endl;

    return 0;
}
