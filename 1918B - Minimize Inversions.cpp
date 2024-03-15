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
      int n;
      cin>>n;
      int a[n+2];
      for (int i = 0; i < n; i++) cin>>a[i];
      map<int,int>m ;
      int b;
      for (int i = 0; i < n; i++) {
        cin>>b;
        m[a[i]]=b;
      }
      sort(a,a+n);
      for (int i = 0; i < n; i++) cout<<a[i]<<" ";
      cout<<endl;
      for(auto it:m)
            cout<<it.second<<" ";
      cout<<endl;
      
    }
    
    bye;
}
