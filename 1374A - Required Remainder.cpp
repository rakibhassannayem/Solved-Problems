#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    ll t,x,y,n;
    cin>>t;
    while(t--){
      cin>>x>>y>>n;
      ll k=n%x;
      ll r= k-y;
      if(r < 0)
        n=n-(r+x);
      else
        n=n-r;
        
        
      cout<<n<<endl;
    }
    bye;
}
