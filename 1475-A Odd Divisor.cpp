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
    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	if((n&(n-1))==0)
    		cout<<"No"<<endl;
    	else
    		cout<<"YES"<<endl;
    }


    bye;
}
