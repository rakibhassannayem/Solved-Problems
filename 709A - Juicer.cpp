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
	int n,b,d;
	cin>>n>>b>>d;
	int a[n+2],s=0,c=0;
	for (int i = 0; i < n; ++i){
		cin>>a[i];
		if(a[i]<=b)
			s+=a[i];
		if(s>d){
			c++;
			s=0;
		}
	}
	cout<<c<<endl;

    bye;
}
