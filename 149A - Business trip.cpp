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
    int k;
    cin>>k;
    int a[13];
    int s=0,i;
    for (int i = 1; i <= 12; ++i)cin>>a[i];
    sort(a+1, a + 13, greater<int>());
	a[0]=0;
    for (i = 0; i <= 12; i++)
    {
    	s+=a[i];
    	if(s>=k){
    		break;
    	}
    }
    if(s<k)
    	cout<<-1<<endl;
    else
    	cout<<i<<endl;

    bye;
}
