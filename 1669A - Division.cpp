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
      cout<<"Division ";
      cin>>n;
      if(n<=1399)
        cout<<4<<endl;
      else if(n>1399 && n<=1599)
        cout<<3<<endl;
      else if(n>1599 && n<=1899)
        cout<<2<<endl;
      else
        cout<<1<<endl;
    }
    
    bye;
}
