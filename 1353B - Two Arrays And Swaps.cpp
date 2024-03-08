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
    int t;
    cin>>t;
    while(t--){
        int n,k,s1=0,s2=0;
        cin>>n>>k;
        int a[n+2],b[n+2];
        for(int i=0; i<n; i++){
            cin>>a[i];
            s1+=a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        if(k==0){
            cout<<s1<<endl;
        }
        else{
            sort(a,a+n);
            sort(b,b+n,greater<int>());
            for(int i=0; i<k; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[i]<b[j])
                        swap(a[i],b[j]);
                    }
                }
            for(int i=0; i<n; i++)
                s2+=a[i];
            cout<<s2<<endl;
        }
        
    }
    
    bye;
}
