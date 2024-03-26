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
      ll a,b,n;
      cin>>a>>b>>n;
      ll ar[n];
      ll s=b;
      for (int i = 0; i < n; i++) cin>>ar[i];
      for (int i = 0; i < n; i++) {
        ll p=1+ar[i];
        if(p<=a)
          s+=ar[i];
        else
          s+=a-1;
      }
      cout<<s<<endl;
    }
    
    bye;
}
