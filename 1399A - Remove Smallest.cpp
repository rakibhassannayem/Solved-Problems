#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+2];
        int c=n;
        for(int i=0;i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=1; i<n; i++)
        {
            if(abs(a[i]-a[i-1]) < 2)
                c--;
        }
        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    
    bye;
}