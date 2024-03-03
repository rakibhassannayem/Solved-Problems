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
      int n,c=0,f,w1=0,w0=0;
      cin>>n;
      int a[n+2];
      for (int i = 0; i < n; i++)
        cin>>a[i];

      for (int i = 0; i < n; i++) {
        f=0;
        if(i%2!=0)
          f=1;
        if(a[i]%2 != f)
          c++;
        if(a[i]%2 != f && f==0)
          w0++;
        else if(a[i]%2 != f && f==1)
          w1++;          
      }
        
      if(w0!=w1)
        cout<<-1<<endl;
      else
        cout<<c/2<<endl; 
    }
    bye;
}
