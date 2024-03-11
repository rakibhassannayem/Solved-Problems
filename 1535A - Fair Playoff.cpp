#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int t;
    cin>>t;
    while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      
      int m1=max(a,b);
      b=min(a,b);
      int m2=max(c,d);
      d=min(c,d);
      if(m1>d && m2>b)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    
    bye;
}
