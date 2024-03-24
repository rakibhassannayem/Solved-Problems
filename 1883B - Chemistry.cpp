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
      int a,b;
      string s;
      cin>>a>>b>>s;
      map<char,int> mp;
      for (int i = 0; i < a; i++) {
        mp[s[i]]++;
      }
      int c=0;
      for(auto i:mp) {
        if(i.second % 2 != 0)
        c++;
      }
      if(c-1==0)c=0;
      else c-=1;
      if(b>=c)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    
    bye;
}
