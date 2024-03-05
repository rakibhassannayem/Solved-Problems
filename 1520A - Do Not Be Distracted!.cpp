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
    while(t--)
    {
      int n,f=1;
      cin>>n;
      string s;
      cin>>s;
      for(int i=0; i<n; i++)
      {
          if(s[i]!=s[i+1])
          {
          for(int j=i; j>=0; j--)
          {
              if(s[i+1]==s[j]){
                f=0;
                break;
              }
          }
          if(f==0)
            break;
          }
      }
      if(f==0)
        cout<<"NO"<<endl;
      else
        cout<<"YES"<<endl;
    }
    
    bye;
}
