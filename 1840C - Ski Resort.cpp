#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;break;
        }
    }return 1;
}
int main(){
speedUp;
    int n;cin>>n;
    int a[n+3];
    vector<int> v;
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    int c=0,c1=0,c2=0,c3=0;
    for (int i = 0; i < n; i++) {
      if(a[i]==4)
        c++;
      else{
        int l=(4-a[i]);
        if(l==3)
          c3++;
        else if(l==2)
          c2++;
        else if(l==1)
          c1++;
      }
    }
    while(c3!=0 && c1!=0){
      c3--;c1--;c++;
    }
    while(c2!=0 && c1!=1){
      c2--;c1--;c++;
    }
    c2-=c2/2;
    c+=c2/2;
    int t=c3/4;
    c3-=t*4;
    c+=t;
      
    cout<<c+c3+c2+c1<<endl;
    
    bye;
}
