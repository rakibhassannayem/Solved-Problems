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
      int n;cin>>n;
      ll a[n+1];
      for (int i = 0; i < n; i++) {
        cin>>a[i];
      }
      int max=*max_element(a,a+n);
      int min=*min_element(a,a+n);
      cout<<max-min<<endl;
    }
    
    bye;
}
