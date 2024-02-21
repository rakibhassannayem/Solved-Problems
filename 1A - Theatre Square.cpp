#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p=0,t=0,n,m,a;
    cin>>n>>m>>a;
    if(n%a != 0)
        t=n/a+1;
    else
    {
        t=n/a;
    }
    if(m%a != 0)
        p=m/a+1;
    else
    {
        p=m/a;
    }
    cout<<p*t<<endl;

    return 0;
}
