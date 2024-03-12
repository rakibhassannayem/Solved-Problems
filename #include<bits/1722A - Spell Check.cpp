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
    int n,f;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()!=5)
      cout<<"NO"<<endl;
    else{
      if(s=="Timur" || s=="miurT" || s=="Trumi" || s=="mriTu")
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    
    }
    
    bye;
}
