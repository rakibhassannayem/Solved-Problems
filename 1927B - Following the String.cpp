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
      for (int i = 0; i < n; i++)
        cin>>a[i];
      string s="abcdefghijklmnopqrstuvwxyz";
      map<char, int> mp;
      for (int i = 0; i < 26; i++) {
        mp[s[i]]=0;
      }
      vector<char>v ;
      
      for (int i = 0; i < n; i++) {
        
        for(auto it:mp){
          if(it.second == a[i]){
            cout<<it.first;
            mp[it.first]++;
            break;
          }
        }
      }
      cout<<endl;
      
    }
      
      
      // map<char,int>:: iterator i;
      // for(i=mp.begin(); i!=mp.end(); i++)
      //   cout<<(*i).first<<endl;
    
    bye;
}
