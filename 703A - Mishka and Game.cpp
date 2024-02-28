#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int t,m=0,c=0;
    cin>>t;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      if(a>b)
        m++;
      else if(b>a)
        c++;
    }
    if(m>c)
      cout<<"Mishka"<<endl;
    else if(c>m)
      cout<<"Chris"<<endl;
    else
      cout<<"Friendship is magic!^^"<<endl;
    
    bye;
}
