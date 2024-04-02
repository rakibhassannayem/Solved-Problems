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
    int s=m+n;
    char c;
    for (int i = 1; i <= s; ++i)
    {
    	if(i%2!=0)
    		c='a';
    	else
    		c='m';
    	n--;m--;
    	if(n==0 || m==0)
    		break;
    }
    if(c=='a')
    	cout<<"Akshat"<<endl;
    else
    	cout<<"Malvika"<<endl;

    bye;
}
