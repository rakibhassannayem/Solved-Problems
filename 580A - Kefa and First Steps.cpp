#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;break;
        }
    }return 1;
}
int main(){
speedUp;
    int n;
    cin>>n;
    if(n==1){
    	cout<<1<<endl;
    	bye;
    }
    ll a[n+2];
    for(int i=0; i<n; i++)cin>>a[i];
    ll c=1,m=1;
    for(int i=n-1; i>0; i--){
        if(a[i]>=a[i-1]){
            c++;
            m=max(m,c);
        }
        else
            c=1;
    }

    cout<<m<<endl;

    bye;
}
