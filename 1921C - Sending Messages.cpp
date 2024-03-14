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
      ll n,f,a,b;
      cin>>n>>f>>a>>b;
      ll m[n+2];
      for (int i = 0; i < n; i++) {
        cin>>m[i];
      }
 
      ll rem=0,prev=0;
      for (int i = 0; i < n; i++) {
        prev=(abs(prev-m[i])*a);
        rem=min(b,prev);
        f-=rem;
        prev=m[i];
        //cout<<f<<endl;
      }
      if(f>0)
        cout<<"yes"<<endl;
      else
        cout<<"no"<<endl;
      
      
    }
    
    bye;
}
