#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int t;
    string s="codeforces";
    cin>>t;
    while(t--){
    char c;
    int f=0;
      cin>>c;
    for (int i = 0; i < s.size(); i++) {
      if(c==s[i])
        f=1;
    }
    if(f==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    }
    
    bye;
}
