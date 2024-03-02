#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int a[5],r=0,n=0;
    for (int i = 1; i <= 4; i++) {
      cin>>a[i];
    }
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; j <= 4; j++) {
          if(s[i]-48==j)
            r+=a[j];
        }
    }
    cout<<r<<endl;
    
    bye;
}
