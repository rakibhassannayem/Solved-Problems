#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int t,n;
    cin>>t;
    while(t--){
      cin>>n;
      int h=n/2;
      vector<int>v;
      if(n%4 != 0){
        cout<<"NO"<<endl;
      }  
      else{
        cout<<"YES"<<endl;
        for(int i=1; i<=n; i++){
            if(i%2==0)
              cout<<i<<" ";
            else
              v.pb(i);
        }
        for (int i = 0; i < h-1; i++)
            cout<<v[i]<<" ";
      cout<<v[h-1]+h<<endl;
    }
    }
    bye;
}
