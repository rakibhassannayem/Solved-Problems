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
    int n;
    cin>>n;
    int a[n+2];
    for (int i = 0; i < n; ++i)
    	cin>>a[i];
    sort(a,a+n);
    int c=abs(a[0]-a[1]);
    
    for (int i = n-1; i > 1 ; i--) {
      int p=abs(a[i]-a[i-1]);
      if(p<c)
        c=p;
    }
    
    cout<<c<<endl;
    
    }
    
    bye;
}
