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
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
            cout<<c<<endl;
        else if(a==c)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
    
    bye;
}
