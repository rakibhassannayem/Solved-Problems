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
	ll n,l,t,sl;
	cin>>n;
	if(n<0){
		l=n/10;
		t=n%10;
		sl = (l-(l%10)+t);
		cout<<max(l,sl)<<endl;
	}
	else
		cout<<n<<endl;
    bye;
}
