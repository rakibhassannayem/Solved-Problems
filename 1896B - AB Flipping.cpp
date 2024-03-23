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
      string s;
      cin>>n>>s;
      int c=n-1;
      for (int i = 0; i < n; i++) {
        if(s[i]=='B')
          c--;
        else
        break;
      }
      for (int i = n-1; i >= 0; i--) {
        if(s[i]=='A')
          c--;
        else
          break;
      }
      if(c<0)
        cout<<0<<endl;
      else
        cout<<c<<endl;
    }
    
    bye;
}
