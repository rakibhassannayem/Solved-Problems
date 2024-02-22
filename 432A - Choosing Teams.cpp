#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    int n,k,c=0;
    cin>>n>>k;
    int a[n+2];
    for (int i = 0; i < n; ++i)
        cin>>a[i];
    sort(a,a+n);
    
    for (int i = 2; i < n; i+=3)
    {
        if(5-a[i]>=k){
        c++;
        a[i]+=k;
        }
    }
    cout<<c<<endl;
    
    bye;
}