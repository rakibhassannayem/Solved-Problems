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
      int n,c=0,s=0;
      cin>>n;
      int t=n%10;
      while(n>0){
          n=n/10;
          c++;
      }
     for(int i=1; i<10; i++)
        {
            if(t==i)
                s=t*10-10;
        }
    
     if(c==1)
        cout<<s+1<<endl;
     else if(c==2)
        cout<<s+3<<endl;
     else if(c==3)
        cout<<s+6<<endl;
     else
        cout<<s+10<<endl;
    }
    
    bye;
}
