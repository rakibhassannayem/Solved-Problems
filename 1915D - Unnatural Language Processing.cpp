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
      vector<char>v ;
      int f=0;
      for (int i = n-1; i >= 0; i--) {
        v.pb(s[i]);
        if(s[i]=='a' || s[i]=='e'){
            v.pb(s[i-1]);
            if(i-2 == -1)
              break;
            else{
              v.pb('.');
              i--;
            }
          }
        else{
            v.pb(s[i-1]);
            v.pb(s[i-2]);
            if(i-3 == -1)
              break;
            else{
              v.pb('.');
              i-=2;
            }
        }
      }
      for (int i = v.size()-1; i >=0 ; i--)
        cout<<v[i];
      cout<<endl;
    }
    
    bye;
}
