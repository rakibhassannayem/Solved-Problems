#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll d=abs(a-b);
        if(d%10==0)
            cout<<d/10<<endl;
        else
            cout<<(d/10)+1<<endl;
    }
    
    bye;
}