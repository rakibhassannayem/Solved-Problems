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
    int n,m;
    cin>>n>>m;
    int a[n+2];
    for (int i = 0; i < n; ++i)cin>>a[i];
    sort(a,a+n);
	int s=0;
	for (int i = 0; i < m; ++i)
	{
		if(a[i]<0){
			s+=abs(a[i]);
		}
	}
	cout<<s<<endl;


    bye;
}
