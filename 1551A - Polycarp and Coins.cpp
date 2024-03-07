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
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    int o=n/3,tw=n/3;
    if(n%3==1)
        o++;
    else if(n%3==2)
        tw++;
    cout<<o<<" "<<tw<<endl;
    }
    bye;
}
