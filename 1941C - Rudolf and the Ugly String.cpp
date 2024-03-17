#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define pb push_back
bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;break;
        }
    }return 1;
}
#define bye return 0
int main(){
speedUp;
    int t;
    cin>>t;
    while(t--){
      int n;
      string s;
      cin>>n>>s;
      int f=0;
      for (int i = n-1; i >= 0; i--) {
        if(s[i]=='e' && s[i-1]=='i' && s[i-2]=='p'){
            f++;
            i-=2;
          }
        else if(s[i]=='p' && s[i-1]=='a' && s[i-2]=='m'){
              f++;
              i-=2;
            }
        }
      cout<<f<<endl;
    }
    
    bye;
}
