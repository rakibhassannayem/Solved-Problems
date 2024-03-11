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
      int h,m;
      cin>>h>>m;
      h=23-h;
      m=60-m;
      cout<<h*60+m<<endl;
    }
    
    bye;
}
