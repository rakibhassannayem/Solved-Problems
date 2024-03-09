#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int n,c1=0,c2=0,c3=0;
    cin>>n;
    int a[n+2];
    for (int i = 1; i <= n; ++i)
    	cin>>a[i];
    vector<int> v;
    for (int i = 1; i <= n; ++i)
    {
    	if(a[i]==1)
    	{
    		c1++;
    	}
    	if (a[i]==2)
    	{
    		c2++;
    	}
    	if (a[i]==3)
    	{
    		c3++;
    	}
    }
    
    bye;
}